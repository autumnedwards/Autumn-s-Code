//figuring out the number of credits needed to complete a students major requirementd
//C= computer engineering
//E= electrical engineering
//S= computer science
//M= math

#include <iostream>


using namespace std;

void heading();
int getCredits(int credits, char userMajor);
void printMessage(int credits, char userMajor);

int main()
{
    heading();

    char userMajor; //prompt user for their major
    cout<<"Enter userMajor"<< endl;
    cin>> userMajor;
    int credits=0; //store number of credits in a variable
    cout<<"Enter number of credits completed"<<endl; //prompt user for the number of credits they have
     cin>> credits;

      int remainingcredits =getCredits (credits,userMajor);//call getCredits function, pass in major, and number of credits & store return value in a variable
 
    printMessage (remainingcredits, userMajor);     //call printMessage function, pass in major, and number of credits
  
  
  return 0;
}

int getCredits(int credits, char userMajor)
{
    int ceCredits = 82;
    int eeCredits = 80;
    int csCredits = 75;
    int mathCredits = 85;

    //figure out their major
    //subtract their major credits from current credits,
    //return number of credits remaining based on their major
    if (userMajor == 'C') 
    {
        return ceCredits-credits;
    } 
    else if (userMajor == 'E')
    {
        return eeCredits-credits;
    }
    else if (userMajor == 'S')
    {
        return csCredits-credits; 
    }
    else if (userMajor == 'M')
    {
        return mathCredits-credits;
    }
}

void printMessage(int credits, char userMajor)
{
    if (userMajor=='C')
    {
        cout<< " As a computer enginering major you still need "<< credits<< " to graduate";
    }
     if (userMajor=='E')
    {
        cout<< " As a electrical enginering major you still need "<< credits<< " to graduate";
    }
     if (userMajor=='S')
     {
        cout<< " As a computer science major you still need "<< credits<< " to graduate";
    }
     if (userMajor=='M')
    {
        cout<< " As a math major you still need "<< credits<< " to graduate";
    }

}

void heading()
{
    cout<< "Autumn Edwards"<< endl;
}



    
