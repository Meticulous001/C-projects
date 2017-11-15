#include <iostream>
#include <string>

using namespace std;

class Student

{   static int level;
    int age;
    string firstName;
    char* surname;


public:

    Student()
    {
        age=0;
        firstName="";
        surname= "";
        level=200;
    }                   ///default constructor 1.

    Student(char* SN)
    {
        firstName="";
        surname=SN;
        age=0;
        level=200;
    }                   ///constructor 2.

    Student(string FN, char* SN): firstName(FN), surname(SN)
    {
        age=0;
        level=200;
    }


    Student(string FN, char* SN, int a): firstName(FN), surname(SN), age(a)
    {
            level=200;
    }


    void setFullnames(string FN, char* SN)
    {
        firstName=FN;
        surname=SN;
    }

    void setAge(int a)
    {
        age=a;
    }

    int getAge()
    {
        return age;
    }
    string getFN()
    {
        return firstName;
    }
    char* getSN()
    {
        return surname;
    }

    void displayFullName()
    {
        cout<<getFN() <<" " <<getSN();
    }

    void displayParameters()
    {
        cout <<getFN() <<endl;
        cout <<getSN() <<endl;
        cout <<getAge() <<endl;
        cout <<level ;
    }

    ~Student()
    {
        delete surname;
    }

};

int Student:: level=0;

    main()

    {
      /**  Student s1("Raheem", "Muiz", 18);
        s1.displayFullName();
        cout<<"\n" <<endl;
        s1.displayParameters();** //third constructor**/



     /** Student s2("Muiz");


      s2.setAge(20);
      s2.getAge();

      s2.setFullnames("Raheem", "Muiz");
      s2.getFN();

     // s2.setSN("Raheem");
      s2.getSN();


      s2.displayFullName();
        cout<<"\n" <<endl;
        s2.displayParameters();**/

      Student s3;
        s3.setFullnames("Muiz","Raheem");
        s3.setAge(19);
        s3.displayParameters();



    }
