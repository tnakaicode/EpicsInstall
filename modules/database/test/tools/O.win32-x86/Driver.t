#!/usr/bin/env perl

use lib 'C:/Users/TakuNakai/epics/base-7.0.2/lib/perl';

use Test::More tests => 2;

use DBD::Driver;

my $drv = DBD::Driver->new('test');
isa_ok $drv, 'DBD::Driver';
is $drv->name, 'test', 'Driver name';

