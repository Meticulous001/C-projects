#include <iostream>
using namespace std;

class Course
{
    string courseCode;
    int courseUnit;
    static int level;

public:
    Course()
    {

    }
    Course(string code, int unit): courseCode(code)
    {
     courseUnit=unit;
     level=200;
    }

    void setCourse(string code, int unit)
    {
        courseCode==code;
        courseUnit=unit;
    }

    int getCourseUnit() {return courseUnit;}
    string getCourseCode() {return courseCode;}

    void displayCourseDetails()
    {
        cout<< "Course Code: " <<getCourseCode() <<endl;
        cout<< "Course Unit: " <<getCourseUnit();

    }
};


class Lecturer
{
    Course *C;
    string name;

public:
    Lecturer(string n,string code, int unit): C(new Course(code,unit))

    {
        name=n;
    }

    Lecturer(string n, Course* cos): name(n)
    {
        C=cos;
    }

     string getName() {return name;}

    Course *getCourse()
    {
        return C;
    }


    void displayDetails()
    {
        cout<<"Name: " <<getName() <<endl;
        (*getCourse()).displayCourseDetails();  ///or getCourse->displayCourseDetails(); all because it's of pointer type.
    }


};

int Course::level=100;







main()
{
    Lecturer lec1("Dr Raheem", "CSC440", 2);
    lec1.displayDetails();

}
