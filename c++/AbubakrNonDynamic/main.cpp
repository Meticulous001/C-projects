# include <iostream>   // An header file for I/O operations
using namespace std;   // For Uniqueness

class Date
{
    int day;
    char * month;
    int year;
    // class attributes: they are private by default

    public:

    void ManageDate(int d, char* M, int y)   //// initialization of actual parameters
    {
        day=d;
        month=M;
        year= y;
    }

    Date()   //default constructor
    {
        day=0;
        month="";
        year=0;
    }

    Date(int D, char* m, int Y)
    {
        day=D;
        month=m;
        year =  Y;
    }

    int getDay()
    {
        return day;
    }

    int getYear()
    {return year;
    }

    char * getMonth()
    {
        return month;
    }

};


class Student
{   //////////// Class Attributes Starts from Here ////////////
    char * FirstName;    // Non-static variable
    string Surname;
    int Age;
    static int Level;  // A static variable
    Date DOB;    // An instance of class Date as an attribute of class Student

    ///////////////  Class Attributes  Ends Here ///////////////
    // The class attributes are public by default////////

public:  //// change of access mode modifier from private to public

    Student(int D, char* m, int Y):DOB(D,m,Y)
    {
        FirstName="";
        Surname="";
        Age=0;
        Level = 150;  /* This is an assignment statement for class variable Level
                        A class variable can be reassigned a value in the class
                       But the initialization must be done outside the class. */
    }

     Student(char * FName, Date D)  //// constructor with one argument/parameter
    {
        FirstName=FName;
        Surname="";
        DOB=D;
        Age=0;
        Level = 150;  /* This is an assignment statement for class variable Level
                        A class variable can be reassigned a value in the class
                       But the initialization must be done outside the class. */
    }

    Student(char * FName, string SName,int D, char* m, int Y):DOB(D,m,Y) //// constructor with two arguments/parameters
    {
        FirstName=FName;
        Surname=SName;
        Age=0;
        Level = 150;  /* This is an assignment statement for class variable Level
                        A class variable can be reassigned a value in the class
                       But the initialization must be done outside the class. */
    }

    Student(char * FName, string SName, int age)  //// constructor with two arguments/parameters
    {
        FirstName=FName;
        Surname=SName;
        Age=age;
        Level = 150;  /* This is an assignment statement for class variable Level
                        A class variable can be reassigned a value in the class
                       But the initialization must be done outside the class. */
    }
    void SetFullNames(char * FName, string SName)
    {
        FirstName = FName;
        Surname = SName;
    }
    void SetAge(int age)
    {
        Age=age;
    }
    /////// User-defined functions  to initialize class attributes

    char * GetFName()
    {
        return FirstName;
    }
    string GetSName()
    {
        return Surname;
    }
    int GetAge()
    {
        return Age;
    }
    int GetLevel()
    {
        return Level;
    }
    /////////////// User-defined functions to return initialized class attributes
    //////////////  to the caller

    void displayFullName()
    {
        cout<<GetFName()<<" "<<GetSName()<<endl;
    }

    void displayParameters()
    {
        cout<<GetFName()<<endl;
        cout<<GetSName()<<endl;
        cout<<GetLevel()<<endl;
    }

    Date GetDate()
    {
        return DOB;
    }
};
int Student :: Level = 100;    //  Initialization of class variable


main()
{
    Student studArray[5]={Student("Abubakar","Salawu",9,"May",2014), Student("Adejumo","Shola",29), Student("Abdul","Ganiyu",18,"April",2013),
    Student("Silva","Philips",19,"January",2010), Student("Bamidele","Mu'aadh", 20,"July",2017)};

    int i;
    for(i=0; i<5; ++i)
    {
        studArray[i].displayParameters();
    }

}

