#include <iostream>
#include <fstream>


void heading();
bool dateCompare (int days[], int months[], int years[], int day, int month, int year);
void printmessage (int day, int month, int year);

 

using namespace std;
int main()

{

    heading();
    int days[3];//creating array for days 
    int months[3];//creating array for months
    int years[3];//creating array for years
    ofstream writer;
    writer.open("file.txt");//write the dates to a file
    writer<< "26" << " " <<"1"<< " "<< "2021" << endl;
    writer<< "13" << " "<< "12" << " "<< "2020" << endl;
    writer<< "1"<< " " << "2" << " "<<  "2021"<< endl;
    ifstream reader;
    reader.open("file.txt");
    int day;
    int month;
    int year;
    int i=0;
    while (!reader.eof())//read the dates from the file using a while loop
    {
        reader>> day >> month >> year; 
        months[i] = month;
        days[i]= day;
        years[i]= year;
        //cout<<"error check"<<months[i]<< days[i]<< years[i]<< endl;
        i++;
    }
    reader.close();
    int DD; 
    int MM;
    int YY;
    cout<< "enter date in the format <day> / <month> / <year>"<< endl;
    cin>> DD>> MM>> YY;
    cout<< DD << "/"<< MM <<"/"<< YY<< endl;
    
    
    bool result= dateCompare ( days, months, years, DD, MM, YY); 
    if (result== true)
    {
        cout<< DD<< "/" << MM<< "/" << YY<< "is available to schedule"<< endl;
    }
    else
    {
        cout<< DD<< "/" << MM<< "/" << YY<< "is not available. Please try again with a different date"<< endl;
    }
    string answer;
    cout<<"do you want to enter more dates? "<< endl;
    cin >>answer;
    while (answer== "yes")
    {
        cout<< "enter date in the format <day> / <month> / <year>"<< endl;
        cin>> DD>> MM>> YY;
        cout<< DD << "/"<< MM <<"/"<< YY<< endl;
        bool result= dateCompare ( days, months, years, DD, MM, YY); 
        if (result== true)
        {
            cout<< DD<< "/" << MM<< "/" << YY<< "is available to schedule"<< endl;
        }
        else
        {
            cout<< DD<< "/" << MM<< "/" << YY<< "is not available. Please try again with a different date"<< endl;
        }
        cout<< "do you want to enter more dates"<< endl;
        cin>> answer;
        if (answer=="no") break; 
    }
        cout<< "Thanks for using the event scheduling program"<< endl;

    return 0;

}

 

void heading()
{
    cout<< "Welcome to the Event Scheduling program"<< endl;
}

 

bool dateCompare (int days[], int months[], int years[], int DD, int MM, int YY)

{
    bool result=true;
    for(int i=0; i<3; i++)
    {
        if (DD== days[i] && MM== months[i]&& YY==years[i] )
        {
            result=false;
        }
    }

    return result;

}


