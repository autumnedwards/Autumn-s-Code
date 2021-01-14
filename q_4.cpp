
//finding the average of numbers 

#include <iostream>

using namespace std;

float average(float num1, float num2, float num3, float num4);// function def

 

int main()

{

    float num1=0;

    float num2=0;

    float num3=0;

    float num4=0;

    cout<<"enter first number"<< endl;

    cin>> num1;

    cout<<"enter second number"<< endl;

    cin>> num2;

    cout<<"enter third number"<< endl;

    cin>> num3;

    cout<<"enter fourth number"<< endl;

    cin>> num4;

    float answer= average(num1,num2,num3,num4);

    cout<< answer; 

 

    return 0;

}




float average(float num1, float num2, float num3, float num4)

{

    return (num1+num2+num3+num4)/4;

}

 

 

void welcome()

{

    cout<< "Welcome to the basic calculator"<<endl;

}

 

float calculate (float num1, float num2, char op)

{

    if (op=='+')

    {

        return num1 + num2;

    }

    else if(op=='-')

    {

        return num1-num2;

    }

    else if(op=='*')

    {

        return num1*num2;

    }

    else if(op=='/')

    {

        return num1/num2;

    }

    else if(op=='^')

    {

        return pow(num1,num2);

    }

    

}

 

void printmessage(float num1, float num2, char op, float answer)

{

    cout<<fixed<< showpoint<< setprecision(1)<<answer;

    cout<<num1<<op<<num2 <<"="<< answer;

}

 




