# Omega6_Simulink_Integration

![OmegaSimulink](/assets/OmegaSimulink.png?raw=true "OmegaSimulink")

# How to Setup the dependencies?
 1- copy dhdc.h and drdc.h to (C:\Program Files\MATLAB\R2016a\extern\include)   
 2- copy dhdms.lib, dhdms64.lib, drdms.lib and drdms64.lib to (C:\Program Files\MATLAB\R2016a\extern\lib\win64\microsoft)  

# How to run it?
run SetUp.m, it will compile the OmegaInterface.cpp and generate the mex file. After that open "OmegaTest.slx" and run it. you should be able to obsreve the cartesian motion on the scopes. you can enable/disable haptic feedback using the manual switch : 

![Model1](/assets/Model1.png?raw=true "Model1")
