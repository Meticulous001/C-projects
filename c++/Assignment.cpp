/**Name:            RAHEEM, Muiz Olalekan
   Matric Number:   15/52HA069


 ///Creating Non-dynamic array of objects using Nested classes\\\
   */

#include <iostream>
#include <string>
using namespace std;

class Lecturer  ///Outer Class
{

 class Date
 {
     int day;
     char* month;
    static int year;
public:
    ///constructors
    Date()   ///default constructor
    {
        day=0;
        month="";
        year=0;
    }
    Date(int d, char* m, int y): day(d), month(m) ///Constructor with 3 parameters
    {
        year=y;
    }

    ///setter() function

    void setDate(int d, char* m, int y)
    {
        day=d;
        month=m;
        year=y;
    }
    ///getter
    int getDay() {return day;}
    char* getMonth() {return month;}
    int getYear() {return year;}


    ///display()
    void displayDate()
    {
        cout << getDay() <<"/" <<getMonth() <<"/" <<getYear() <<endl;
    }


 }; ///2nd outer class

// public:

class Course ///inner class
    {
    private:  char* courseName;
        int courseUnits;

public:

    ///constructors
    Course()
    {

    }
    Course(char* cName, int cUnits): courseName(cName)
    {
        courseUnits=cUnits;
    }

    ///setter
    void setCourse(char* cName, int cUnits)
    {
        courseName=cName;
        courseUnits=cUnits;
    }
    ///getter()

    int getCourseUnits() {return courseUnits;}
    char* getCourseName() {return courseName;}

    ///display fnc()
    void displayCourse()
    {
        cout<<getCourseName() <<" " <<getCourseUnits()<<endl;
    }
    }; ///inner class
    char* name;
    Date DOB;
    Course C;

public:
   // Lecturer()
     //   {

       // }

    Lecturer(char* N, char* cName, int cUnits, int d, char* m, int y):  C(cName, cUnits), DOB(d, m, y)
    {
        name=N;
    }

    Lecturer(char* N, Course cos, Date D): name(N)
    {
        C=cos;
        DOB=D;
    }

    ///setter
    void setName(char* N)
    {
        name=N;
    }

    ///getter

    char* getName() {return name;}
    Date getDate() {return DOB;}
    Course getCourse() {return C;}


///display

    void displayParameters()
    {
        cout<<"Name: " <<getName() <<endl;
        cout<<"Course Title: " <<getCourse().getCourseName() <<endl;
        cout<< "Course Units: " <<getCourse().getCourseUnits() <<endl;
        cout<< "Date: " <<getDate().getDay() <<"/" <<getDate().getMonth() <<"/" <<getDate().getYear() <<endl;
    }


}; ///outer class
int Lecturer::Date::year=2017;

 main()
{
    Lecturer L1("Dr Bajeh","MAT201",3,30,"March",2017);
    L1.displayParameters();  ///1st objects


    //d1.setDate(23)

    cout<<endl;

     Lecturer:: Date d2(12,"April",2017);
    Lecturer:: Course c2("CSC211",2);
    Lecturer L2("Dr Babatunde", c2, d2);
    L2.displayParameters();
                          /// object 2 */

        Lecturer * L3 = new Lecturer("Dr Bajeh","MAT201",3,30,"March",2017);

        //L3->displayParameters();
        (*L3).displayParameters(); ///the braces are must


/***    Lecturer L2;
    L2.setName("Dr Babatunde");
    L2.getDate().setDate(1,"April",2017);
    L2.getCourse().setCourse("CSC211",3);
    L2.displayParameters();**/

   // Lecturer L2("Dr Babatunde", c2, d2);

   Lecturer LArray[2]={Lecturer("Dr Jimoh","CSC231",2,31,"December",2017),Lecturer("Dr Sulaimon","CSC212",3,01,"January",2017)};
    int i;
    for(i=0;i<2;i++)
    {
        cout<<endl;
        LArray[i].displayParameters();
    }


}

