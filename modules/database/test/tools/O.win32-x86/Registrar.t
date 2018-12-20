#!/usr/bin/env perl

use lib 'C:/Users/TakuNakai/epics/base-7.0.2/lib/perl';

use Test::More tests => 2;

use DBD::Registrar;

my $reg = DBD::Registrar->new('test');
isa_ok $reg, 'DBD::Registrar';
is $reg->name, 'test', 'Registrar name';

