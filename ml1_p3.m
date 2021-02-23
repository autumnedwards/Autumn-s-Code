%Problem 3
%creates two 3-by-3 matricies which finds the sum, difference
%product , extracts a row in the first and column in the second,
%extract any 2-by-2 matrice
m1 = [1 2 3 ; 4 5 6 ; 7 8 9]
m2 = [9 8 7 ; 6 5 4 ; 3 2 1]
ans31 = m1 + m2
ans32 = m1 - m2
ans33 = m1 * m2
m1Row1 = m1(2,:)
m2Col2 = m2(:,3)
m12Rows = m1(1:2,1:2)
m223 = m2(2:3,2:3)