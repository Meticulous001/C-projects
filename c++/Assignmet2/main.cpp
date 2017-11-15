/**
 *  Name: RAHEEM, Muiz Olalekan
 *  Department: Computer Science
 *  Course Code: CSC212(Object Oriented Programming using C++)
 *
 *  ///creating an array of dynamic objects using NESTED CLASSES
 *
 */
#include <iostream>
#include <string>
using namespace std;

class Lecturer
{

public:


    class Date
 {
 private:


     int day;
     char* month;
     int year;


public:
    ///constructors
    Date()
    {
        day=0;
        month="";
        year=0;
    }
    Date(int d, char* m, int y): day(d), month(m)
    {
        year=2017;
    }
    ///setter

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


    ///displayFunction()
    void displayDate()
    {
        cout << getDay() <<"/" <<getMonth() <<"/" <<getYear() <<endl;
    }


 }; ///end of class Date

// public:

class Course ///inner class
    {
    private:


         char* courseName;
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
    }; ///end of class Course


    char* name;
    Date DOB;
    Course C;


    public:
        ///constructors of class Lecturer
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

    void displayDetails()
    {
        cout<<"Name: " <<getName() <<endl;
        cout<<"Course Title: " <<getCourse().getCourseName() <<endl;
        cout<< "Course Units: " <<getCourse().getCourseUnits() <<endl;
        cout<< "Date: " <<getDate().getDay() <<"/" <<getDate().getMonth() <<"/" <<getDate().getYear() <<endl;
    }


}; ///end of outer class(Lecturer)


 main()
{


    Lecturer::Course objC4("CSC233",2), objC5("CSC216", 2);

    Lecturer::Date d4(24,"September",2017), d5(25,"December",2017);



    Lecturer *LecArray[5]=
    {
       new Lecturer("Mr Balogun A.O", "CSC212", 3, 18, "May", 2017),
       new Lecturer("Mrs Akintola G.A", "CSC224", 2, 19,"July",2017),
       new Lecturer("Dr Jimoh R.G", "CSC230", 3, 22, "August",2017),
       new Lecturer("Dr Bajeh A.O", objC4, d4),
       new Lecturer("Mrs Salihu S.A", objC5, d5)
    };



    int counter;

    for(counter=0; counter<5; counter++)
    {
        LecArray[counter]->displayDetails();
        cout<<endl;

    }
}
