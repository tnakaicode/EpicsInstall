#!/usr/bin/env perl

use lib 'C:/Users/nakai/epics/base-7.0.2-rc1/lib/perl';

use Test::More tests => 2;

use DBD::Driver;

my $drv = DBD::Driver->new('test');
isa_ok $drv, 'DBD::Driver';
is $drv->name, 'test', 'Driver name';

