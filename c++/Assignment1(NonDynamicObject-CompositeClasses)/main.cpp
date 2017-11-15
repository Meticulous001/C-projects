/**
 *  Name: RAHEEM, Muiz Olalekan
 *  Department: Computer Science
 *  Course Code: CSC212(Object Oriented Programming using C++)
 *
 *  ///creating an array of non dynamic objects using composite object
 *
 */



#include <iostream>
#include <string>
using namespace std;

 class Date
 {
     int day;
     string month;
     int year;
public:
   ///constructors
    Date()          ///default constructor
    {
        day=0;
        month="";
        year=0;
    }
    Date(int d, string m, int y): day(d), month(m)  ///constructor with 3 parameters
    {
        year=y;
    }
    ///end of constructors


    ///set functions()
    void setDate(int d, string m, int y)
    {
        day=d;
        month=m;
        year=y;
    }

    void setDay(int d)
    {day=d;}
    void setMonth(string m)
    {month=m;}
    void setYear(int y)
     {year=y;}



    ///get functions()
    int getDay()
    {
        return day;
    }
    string getMonth()
    {
        return month;
    }
    int getYear()
    {
        return year;
    }

    ///display functions()
    void display1()
    {
        cout<<getDay() <<"/" <<getMonth() <<"/" <<getYear()<<endl;
    }

 };
///end of class Date

class Student
{
    static int level;
    int age;
    string firstname;
    string surname;
    Date DOB;

public:


    ///constructors


    Student(string FN, Date D): DOB(D)  ///constructor with one parameter
    {

        firstname=FN;
    }

    Student(string FN, string SN): firstname(FN) ///constructor with two parameters
    {
        surname=SN;
    }

     Student(string SN, int Age, Date D): surname(SN)  ///constructor with three parameters
    {
        DOB=D;
        age=Age;
    }

    Student(string FN, string SN, int d, string m, int y): DOB(d, m, y) ///constructor with four parameters
    {
        firstname=FN;
        surname=SN;
    }

    Student(string FN, string SN, int Age, int d, string m, int y): DOB(d, m ,y) ///constructor with six parameters
    {
            firstname=FN;
            surname=SN;
            age=Age;
    }



    ///end of constructors


    ///Set functions
    void setFullNames(string FN, string SN)
    {
        firstname=FN;
        surname=SN;
    }
    void setAge(int Age)
    {
        age=Age;
    }

    ///getters
    string getFN() {return firstname;}
    string getSN() {return surname;}
    int  getAge()  {return age;}

    Date getDate() /// a function that returns Date instance for accessing the Date class public functions
    {
        return DOB;
    }


    void setD(int d, string m, int y)
    {
        getDate().setDate(d, m, y);
    }

    void displayDate()
    {
        getDate().display1();
    }

    ///display fncs
    void displayAll()
    {
        cout<<"Name: " <<getFN() <<" " <<getSN() <<endl;
       /// cout<<getAge() <<endl;
        ///cout<<getDate().getDay() <<"/" <<getDate().getMonth() <<"/" <<getDate().getYear()<<endl;


    }

};
int Student::level=200; ///initialization of static variables


main()
{
    Date dob1(18,"May",2017), dob3(19,"July",1908);
    Date dob5;
    dob5.setDate(18,"May",2017);


    Student stdArray[5]=
    { Student("Raheem", dob1),
    Student("Yusuf","Raji",20,"july",2017),
    Student("Abdulrosheed", 27, dob3),
    Student("Abdullah","Abbas"),
    Student("Olawunmi",18,dob5)};

    int i;
    for(i=0; i<5; i++)
    {
        cout<<"object " <<(i+1) <<endl;
        stdArray[i].displayAll();
        cout<<endl;
    }


}

