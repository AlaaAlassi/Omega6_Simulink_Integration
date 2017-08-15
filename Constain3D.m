function [ Force ] = Constain3D(Pos,Borders,stiffness)
%UNTÝTLED Summary of this function goes here
%   Detailed explanation goes here
 if ~isequal([1 3], size(Borders)),
    error('E:Constain3D','Borders must be 1 x 3 Vector');
 end
 
 if ~isequal([3 1], size(Pos)),
    error('E:Constain3D','Pos must be 3 x 1 Vector');
 end

 Force = zeros(3,1);
 
for i=1:3
    if(Pos(i) < Borders(i))
        Force(i) = -(Pos(i)-Borders(i))*stiffness;
    else
    Force(i) = 0;
    end
end


end

