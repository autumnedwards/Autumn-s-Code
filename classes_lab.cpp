#include <iostream>
#include <string>
using namespace std;

class A
{
     private:

     int student_ID =101;
     float current_cum_GPA= 3.75;
     int courses_passed= 110;

     protected:
     int getID()
     {
       return student_ID;
     }
     float getcurrent_GPA()
     {
       return current_cum_GPA;
     }
     int getPassed_courses()
     {
       return courses_passed;
     }

};
class B : public A
{
     protected:
     string course[6]= {"CS401","EE347", "EE352", "CS499","EE469", "CS470"};
     int student_ID=101;
     int academic_year= 2020;
     int semester=1;
     int course_credit[6]={3,4,3,4,3,3};
     double course_final[6]={4.0,3.0,4.0,4.0,4.0,3.0};
    
    public:
    float current_cum_GPA= getcurrent_GPA();
    int courses_passed= getPassed_courses();
    

} ;
class C
{
     public:
     int student_ID=101;
     string student_Name= "David Britain";
     string program= "Computer Science";

};
 class D : public B, public C
{
     public:
     int total_points=0; 
     int total_credits=0;
     double semester_gpa;
     double new_cum;
     double courses_final[6];
     double totalsem=0;
     int sumcred=0;
     double previous_cumpoints=0;
     double total;
     int n=6;
     int student_ID=getID();
     
     double previous_CUM()// calculating the previous cumulative points 
     {
       previous_cumpoints= courses_passed * current_cum_GPA;
       return previous_cumpoints;
     }
     
     double total_sempoints()// calculating the total points for the semester
     {
       
       for(int i=0; i<n; i++ )
       {
           totalsem +=  course_credit[i] * course_final[i];
       }
            return totalsem;
     }
     double sem_cred()// calculating the total credits for the semester
     {
       for(int i=0; i<6; i++)
        {
          sumcred= sumcred+ course_credit[i];
        }
        return sumcred;
     }

     double GPAsem()//calculating the semester gpa
     {
        
        semester_gpa= totalsem/ sumcred;// algebraic formula used to calculate the semester gpa
        return semester_gpa;
     }
    
    double CUM()//calculating the cumulative gpa
    {
      
      total= (totalsem+previous_cumpoints)/ (courses_passed+sumcred);// algebraic equation used to find the final gpa
      return total;
    }   
};

int main()
{
  D CLASS;
  cout<<"Student ID:"<< " "<< CLASS.student_ID<<endl;
  cout<<" " << "Name:"<< " "<< CLASS.student_Name<<endl;
  cout<<" "<< "Program:"<< " "<< CLASS.program<<endl;
  cout<<" " <<"Previous Cumulative Points:"<< " "<< CLASS.previous_CUM()<<endl;
  cout<<" " <<"Previous Total Credits passed:"<< " "<< CLASS.courses_passed<<endl;
  cout<<" " <<"Semester Total Points:"<< " "<< CLASS.total_sempoints()<< endl;
  cout<<" "<< "Semester Total Credits:"<< " "<< CLASS.sem_cred()<< endl;
  cout<<" " <<"Semester GPA:"<< " "<<CLASS.GPAsem()<< endl;
  cout<<" " <<"Cumulatve GPA:"<< " "<<CLASS.CUM();
}
