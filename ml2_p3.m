%program displays the first n odd positive integers where n is greater than
%or equal to 1

n = input('Enter the number of first odd integer(>=1): ') %reading the value entered by the user
display('The first n odd numbers are:')
for i = 0:n-1
odd(i+1) = 2*i+1;
end
odd %Displaying first n odd integers

