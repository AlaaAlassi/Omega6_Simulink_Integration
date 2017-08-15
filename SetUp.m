

addpath('invKinFunctions')
addpath('screws')
addpath('FkinFunctions')
addpath('MechComponents')
TrocarZ = 400.0/1000;%570.0
total = 637.85/1000 ;
initalPen = total - TrocarZ;
D = 30;
K = 1000;
I= 100;
mex OmegaInterface.cpp "C:\Program Files\MATLAB\R2015a\extern\lib\win64\microsoft\drdms64.lib"