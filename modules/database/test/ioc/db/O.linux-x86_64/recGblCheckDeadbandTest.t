#!/usr/bin/env perl

use strict;
use Cwd 'abs_path';

$ENV{HARNESS_ACTIVE} = 1 if scalar @ARGV && shift eq '-tap';
$ENV{TOP} = abs_path($ENV{TOP}) if exists $ENV{TOP};

system('./recGblCheckDeadbandTest') == 0 or die "Can't run ./recGblCheckDeadbandTest: $!\n";
