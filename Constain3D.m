
%MIT License

%Copyright (c) 2017 Alaa Alassi

%Permission is hereby granted, free of charge, to any person obtaining a copy
%of this software and associated documentation files (the "Software"), to deal
%in the Software without restriction, including without limitation the rights
%to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
%copies of the Software, and to permit persons to whom the Software is
%furnished to do so, subject to the following conditions:

%The above copyright notice and this permission notice shall be included in all
%copies or substantial portions of the Software.

%THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
%IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
%FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
%AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
%LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
%OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
%SOFTWARE.




function [ Force ] = Constain3D(Pos,Borders,stiffness)

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

