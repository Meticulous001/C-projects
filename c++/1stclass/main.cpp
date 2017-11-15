#include <iostream>
#include <string>
using namespace std;

class Student

{
    int age, totalCourse;
    public: static int level;
    private: string name;
             string matricNumber, department;

    public:
        void setAge(int a)         {age=a;}
        void setTotalCourse(int t) {totalCourse=t;}
        void setLevel(int l) {level=l;}
        void setName(string n) {name=n;}
        void setDepartment(string d) {department=d;}

        int getAge() {return age;}
        string getName() {return name;}
        string getDept() {return department;}

        void disp()
        {
            cout << "name :"<<name <<endl;
            cout <<"age :" <<age <<endl;
            cout <<"level: " <<level <<endl;
        }

};

int Student::level=200;


int main()
{
   Student s1;
   s1.setAge(20);
   s1.setName("Raheem Muiz Olalekan");
   s1.setDepartment("CSC");
   s1.getAge();
   s1.getName();
   s1.getDept();
   s1.disp();
    return 0;
}
