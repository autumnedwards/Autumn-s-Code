
//using set precision 

#include <iostream>

#include <iomanip>

using namespace std;

int main()

    {

    float a = 3;

    float b = 7;

    float c = a/b;

    cout <<  fixed << showpoint << setprecision(3) << float(c);

    }