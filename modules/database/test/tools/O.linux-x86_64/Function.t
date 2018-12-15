#!/usr/bin/env perl

use lib '/home/oem/epics/base-7.0.2-rc1/lib/perl';

use Test::More tests => 2;

use DBD::Function;

my $func = DBD::Function->new('test');
isa_ok $func, 'DBD::Function';
is $func->name, 'test', 'Function name';

