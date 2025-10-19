## Generated SDC file "Question6_unit.out.sdc"

## Copyright (C) 2025  Altera Corporation. All rights reserved.
## Your use of Altera Corporation's design tools, logic functions 
## and other software and tools, and any partner logic 
## functions, and any output files from any of the foregoing 
## (including device programming or simulation files), and any 
## associated documentation or information are expressly subject 
## to the terms and conditions of the Altera Program License 
## Subscription Agreement, the Altera Quartus Prime License Agreement,
## the Altera IP License Agreement, or other applicable license
## agreement, including, without limitation, that your use is for
## the sole purpose of programming logic devices manufactured by
## Altera and sold by Altera or its authorized distributors.  Please
## refer to the Altera Software License Subscription Agreements 
## on the Quartus Prime software download page.


## VENDOR  "Altera"
## PROGRAM "Quartus Prime"
## VERSION "Version 24.1std.0 Build 1077 03/04/2025 SC Lite Edition"

## DATE    "Sun Oct 19 13:46:05 2025"

##
## DEVICE  "5CGXFC7D6F31C6"
##


#**************************************************************
# Time Information
#**************************************************************

set_time_format -unit ns -decimal_places 3



#**************************************************************
# Create Clock
#**************************************************************

create_clock -name {i_clk} -period 1.000 -waveform { 0.000 0.500 } [get_ports {i_clk}]


#**************************************************************
# Create Generated Clock
#**************************************************************



#**************************************************************
# Set Clock Latency
#**************************************************************



#**************************************************************
# Set Clock Uncertainty
#**************************************************************

set_clock_uncertainty -rise_from [get_clocks {i_clk}] -rise_to [get_clocks {i_clk}] -setup 0.100  
set_clock_uncertainty -rise_from [get_clocks {i_clk}] -rise_to [get_clocks {i_clk}] -hold 0.060  
set_clock_uncertainty -rise_from [get_clocks {i_clk}] -fall_to [get_clocks {i_clk}] -setup 0.100  
set_clock_uncertainty -rise_from [get_clocks {i_clk}] -fall_to [get_clocks {i_clk}] -hold 0.060  
set_clock_uncertainty -fall_from [get_clocks {i_clk}] -rise_to [get_clocks {i_clk}] -setup 0.100  
set_clock_uncertainty -fall_from [get_clocks {i_clk}] -rise_to [get_clocks {i_clk}] -hold 0.060  
set_clock_uncertainty -fall_from [get_clocks {i_clk}] -fall_to [get_clocks {i_clk}] -setup 0.100  
set_clock_uncertainty -fall_from [get_clocks {i_clk}] -fall_to [get_clocks {i_clk}] -hold 0.060  


#**************************************************************
# Set Input Delay
#**************************************************************



#**************************************************************
# Set Output Delay
#**************************************************************



#**************************************************************
# Set Clock Groups
#**************************************************************



#**************************************************************
# Set False Path
#**************************************************************



#**************************************************************
# Set Multicycle Path
#**************************************************************



#**************************************************************
# Set Maximum Delay
#**************************************************************



#**************************************************************
# Set Minimum Delay
#**************************************************************



#**************************************************************
# Set Input Transition
#**************************************************************

