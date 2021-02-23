%Problem 4
%the function graphs 
%f(x) = A exp(-t) [ B cos(2t) + C sin(2t)], when A = 2,  B = 3, and  C = 2. 
function g = graph
A = 2
B = 3
C = 2
t1 = linspace(0, 10, 20);
g = A.*exp(-t1).*(B*cos(2*t1) + C*sin(2*t1))
plot(t1,g);
grid;
xlabel('Input: t');
ylabel(' Output: Aexp(-t)[Bcos(2t) + Csin(2t)]');
end