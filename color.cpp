//finding the colors made when mixing numbers
#include <iostream>


using namespace std;

string newcolor (string color1, string color2);

 

int main()

{

    string color1;

    string color2;

    cout<<"enter a color (red, yellow, blue)"<< endl;

    cin>> color1;

    cout<< "enter a second color (red, yellow, blue)"<< endl;

    cin>> color2;

    string final= newcolor(color1,color2);

    cout<< color1<< " " <<"and"<<" "<< color2<<" "<< "makes"<< " "<<final<< endl;

 

    return 0;

}

 

string newcolor (string color1, string color2)

{

    if (color1== "red" and color2== "blue")

    {

        return "purple";

    }

    else if(color1== "blue" and color2== "red")

    {

        return "purple";

    }

    else if(color1== "red" and color2== "yellow")

    {

        return "orange";

    }

    else if(color1== "yellow" and color2== "red")

    {

        return "orange";

    }

    else if(color1== "blue" and color2== "yellow")

    {

        return "green";

    }

     else if(color1== "yellow" and color2== "blue")

    {

        return "green";

    }
}