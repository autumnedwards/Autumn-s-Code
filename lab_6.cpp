//steps for  main
//step 1: write the tourist info to a file
//step 2: call the void heading function
// step 3: read info from the file in a while loop
// step 4: call the get profit function

#include <iostream>
#include <fstream>
#include <iomanip>


using namespace std;

void heading ();

float getProfit (float expenses, float revenue);

void PrintMessage (string storeName1, float profit);

 

int main()

{

    ofstream writer;

    writer.open("file.txt");

    writer<< "DC Tourism"<< endl << "Expenses 100.20"<< endl<< "Revenue 200.50"<< endl;

    writer<< "Maryland Tourism"<< endl << "Expenses 150.33"<< endl<< "Revenue 210.33"<< endl;

    writer<< "Virginia Tourism"<< endl << "Expenses 140.00"<< endl<< "Revenue 230.00";

    heading();// call void function; add setw to align columns

    ifstream reader;

    reader.open("file.txt");

    string name;

    float expenses=0;

    float revenue=0;

    string e;

    string r;

    string extra;

     while (reader)// while there are still things to read

    {

       getline(reader, name);

       reader>> e >> expenses;

       reader>> r >> revenue;

       getline(reader, extra);

       float profit= getProfit (expenses, revenue);

       PrintMessage(name, profit);

       

    }

    reader.close();

    

 

    return 0;

}

 

void heading()

{

    cout<< setw(20)<< "Store name" << setw(20) << "Profit"<< endl;

}

 

float getProfit (float expenses, float revenue)

{

    float profit= revenue - expenses;

    return profit;

    

}

 

void PrintMessage (string name, float profit)

{

    cout<< setw(20)<< name << right << setw(20)<< fixed<< showpoint<< setprecision(2)<< profit<<endl;

}



