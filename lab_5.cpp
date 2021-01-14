#include <iostream>
#include <cmath>
#include <iomanip>

 

using namespace std;

void welcome();//function def

float calculate (float num1,float num2,char op);//function def

void printmessage (float num1,float num2,char op,float answer);//function def

 

int main()

{

    string more;

    cout<< "do you want to calculate more numbers"<< endl;

    cin>> more;

        while (more=="yes")

        {

            welcome();

            float num1=0;

            float num2=0;

            char op;

            cout<< "enter your first number"<< endl;

            cin>>num1;

            cout<< "enter your second number"<< endl;

            cin>>num2;

            cout<< "enter an operation (+,-,*,/,^,%)"<< endl;

            cin>> op;

            float answer=calculate (num1,num2,op);

            printmessage (num1,num2,op,answer);

            cout<< "do you want to calculate more numbers"<< endl;

            cin>> more;

            if (more=="no")

            break;

        }

        if (more=="no")

        {

            cout<<"thanks for using the basic calculator"<< endl;

        }

        else

        {

            cout<<"did not follow instructions"<<endl;

        }

 

    return 0;

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

 




