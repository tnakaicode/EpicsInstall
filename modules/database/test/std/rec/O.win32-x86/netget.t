#!/usr/bin/env perl

use strict;
use warnings;

use lib 'C:/Users/TakuNakai/epics/base-7.0.2/lib/perl';

use Test::More tests => 3;
use EPICS::IOC;

$ENV{HARNESS_ACTIVE} = 1 if scalar @ARGV && shift eq '-tap';

# Keep traffic local and avoid duplicates over multiple interfaces
$ENV{EPICS_CA_AUTO_ADDR_LIST} = 'NO';
$ENV{EPICS_CA_ADDR_LIST} = 'localhost';
$ENV{EPICS_CAS_INTF_ADDR_LIST} = 'localhost';
$ENV{EPICS_PVA_AUTO_ADDR_LIST} = 'NO';
$ENV{EPICS_PVA_ADDR_LIST} = 'localhost';
$ENV{EPICS_PVAS_INTF_ADDR_LIST} = 'localhost';

my $bin = "C:/Users/TakuNakai/epics/base-7.0.2/bin/win32-x86";
my $exe = ($^O =~ m/^(MSWin32|cygwin)$/x) ? '.exe' : '';
my $prefix = "test-$$";

my $ioc = EPICS::IOC->new();
#$ioc->debug(1);

$SIG{__DIE__} = $SIG{'INT'} = $SIG{'QUIT'} = sub {
    $ioc->kill
        if ref($ioc) eq 'EPICS::IOC' && $ioc->started;
    BAIL_OUT('Caught signal');
};

my $softIoc = "$bin/softIocPVA$exe";
$softIoc = "$bin/softIoc$exe"
    unless -x $softIoc;
BAIL_OUT("Can't find a softIoc executable")
    unless -x $softIoc;

$ioc->start($softIoc, '-x', $prefix);
$ioc->cmd;  # Wait for command prompt

my $pv = "$prefix:BaseVersion";

my @pvs = $ioc->dbl('stringin');
grep(m/$pv/, @pvs)
    or BAIL_OUT('No BaseVersion record found');

my $version = $ioc->dbgf("$pv");
like($version, qr/^ \d+ \. \d+ \. \d+ /x,
    "Got BaseVersion '$version' from iocsh");

note("CA server configuration:\n",
    map("  $_\n", $ioc->cmd('casr', 1)));

my $caget = "$bin/caget$exe";
SKIP: {
    skip "caget not available", 1 unless -x $caget;
    my $caVersion = `$caget $pv`;
    like($caVersion, qr/$pv \s+ \Q$version\E/x,
        'Got same BaseVersion from caget');
}

my $pvget = "$bin/pvget$exe";
SKIP: {
    skip "softIocPVA not available", 1
        if $softIoc eq "$bin/softIoc$exe";
    note("PVA server configuration:\n",
        map("  $_\n", $ioc->cmd('pvasr')));

    skip "pvget not available", 1
        unless -x $pvget;
    my $pvaVersion = `$pvget $pv`;
    like($pvaVersion, qr/$pv \s .* \Q$version\E/x,
        'Got same BaseVersion from pvget');
}

$ioc->kill;
