%display("Maximum of Three Numbers");

n1 = input("Enter Number 1 :");
n2 = input("Enter Number 2 :");
n3 = input("Enter Number 3 :");
if (n1>=n2 && n1>=n3)
    sprintf("%g is the greatest of the numbers!",n1)
elseif (n2>=n1 && n2>=n3)
    sprintf("%g is the greatest of the numbers!",n2)
else
    sprintf("%g is the greatest of the numbers!",n3)
end