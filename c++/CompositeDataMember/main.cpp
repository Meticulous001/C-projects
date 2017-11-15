#include <iostream>
#include <string>

using namespace std;

class Date
{

    int day, year;
    char *month;

public:
   // Date(): day(0), month(""), year(0)
    //{}
    Date(int d, char* m, int y): day(d), month(m)
    {
        year=y;
    }
    void manageDate(int d, char * m, int y)
    {
        day=d;
        month=m;
        year=y;
    }

    int getDay() {return day;}
    string getMonth() {return month;}
    int getYear() {return year;}
};



    class Student
    {
        static int level;
        int age;
        string firstName;
        char* surname;
        Date DOB;
public:
    ///constructors

  // Student()//: //age(0),  firstName(""), surname(""), DOB()
    //{
      //  level=100;
    //}
    Student(int d, char* m, int y): DOB(d, m, y)
    {
        firstName="";
        surname="";
        age=0;
        level=200;
    }
    Student(string FN, Date D)
    {
        firstName=FN;
        surname="";
        DOB=D;
        age=0;
        level=300;

    }
    Student(string FN, char* SN, int d, char* m, int y): DOB(d, m, y)
    {
        firstName=FN;
        surname=SN;
        level=200;
    }

    Student(string FN, char *SN, int age)
    {
        firstName=FN;
        surname=SN;
        age=age;
        level=400;
    }

    ///destructor

    /**~Student()
    {
        delete surname;
    }**/


    ///other funtions

 ///setter(***)
public:
    void setFullName(string FN, char* SN)
    {
        firstName=FN;
        surname=SN;
    }



    void setAge(int Age)
    {
     age=Age;
    }

    ///Getter()

    string getFN() {return firstName;}
    char* getSN() {return surname;}
    int getAge() {return age;}
    int getLevel() {return level;}


    Date getDate()
    {
        return DOB;
    }

    void setDate(int d, char * m, int y)
    {
        getDate().manageDate(d,m,y);
    }

    ///display

    void dislayName()
    {
        cout<<getFN() <<" " <<getSN() <<endl;
    }

    void displayDate(string FN)
    { firstName=FN;
       cout<<firstName <<endl;
       cout << getDate().getDay() <<"/" <<getDate().getMonth() <<"/" <<getDate().getYear();
    }

    displayParameters()
    {
        cout << "Firstname: " <<getFN() <<endl;
        cout << "Surname: " <<getSN() <<endl;
        cout<< "level: " <<getLevel() <<endl;
        cout << "DOB: " <<getDate().getDay() <<"/"<<getDate().getMonth()<<"/" <<getDate().getYear() <<endl;
        cout << "Age: " <<getAge() <<endl;

    }

    };
    int Student::level=0;




  main()
    {
        Student s1("segun","dayo");
       s1.setFullName("Muiz","Raheem");

      //s1.getDate().manageDate(5,"apr",12);
        s1.setAge(19);
        s1.setDate(1,"apr",89);
     //  cout<< s1.getAge();
       // s1.displayParameters();
    s1.displayDate("segun");
    cout<< s1.getDate().getMonth()<<endl;

    }

