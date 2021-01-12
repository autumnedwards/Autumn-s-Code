//printing out an activity based on the temperature inputted by the user

#include <iostream>


using namespace std;
void printmessage();

int main()
{
    int temperature;
    cout <<"Enter temperature" <<endl;
    cin >> temperature;
    if (temperature > 70)
    {
        cout << "go swimming" << endl;
    }
    else 
    {
        if (temperature > 50 && temperature < 70)
        {
            cout << "go biking" << endl;
        }
        else
        {
            if (temperature < 50)
            {
                cout << "go skiing" << endl;
            }
        }

    }
    
    return 0;
}  

void printmessage()
    {   
        cout<< "Autumn Edwards" <<endl;
    }


    
