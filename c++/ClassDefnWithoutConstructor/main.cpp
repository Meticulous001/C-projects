#include <iostream>
#include <string>

using namespace std;

class Student

{   static int level;
     string FirstName;
    char *Surname;
    int age;

public:
    void setAge(int a) {age=a;}
    int getAge() {return age;}

    void setFullNames(string FN, char * SN)
    {
        FirstName=FN;
        Surname=SN;
        }
    string getFN()
    {
        return FirstName;
    }
    char* getSN()
    {
        return Surname;
    }
    int getLevel()
    {
        return (level=250);
    }

    void displayParameters()
    {
        cout<<getFN() <<" " <<getSN() <<endl;
        cout<<getAge() <<endl;
        cout<<getLevel() <<endl;
    }


};

int Student::level=200;

main()
{
   Student s1;
   s1.setAge(20);
   s1.setFullNames("Muiz", "Raheem");
   //s1.SetSN("Raheem");
   s1.displayParameters();
}
