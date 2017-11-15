/**
Name: RAHEEM, Muiz Olalekan
Matric Number: 15/52HA069
Department: Computer Science
Course Code: CSC212(Object Oriented Programming using C++)


Adding namespace, exception and templates
**/



#include <iostream>
#include <string>
#include <math.h>
#include  <stdlib.h>
using namespace std;

///declaration of namespaces

    namespace name1
    {    string state;
     void getState()
        {
        cout<<"State: " <<endl;
        getline(cin,state);
        }
    }

    namespace name2
    {
        string city;
        void getCity()
        {
            cout<<"City: " <<endl;
            getline(cin, city);
        }
    }

    using namespace name1;
    using namespace name2;
    /** Making the namespaces usable **/
//using name1::state;



    class School;

    class SchoolParameter
    {
        string SchName, SchLocation;
        int yearEst;

public:
    ///setter()
        void setParameters()
        {
            cout<<"Enter the school name: "<<endl;
            getline(cin, SchName);
            cout<<"the school location below: " <<endl;
            getState(); /// calling a function from the namespace name1
            getCity(); /// calling a function from the namespace name2
            SchLocation=state;

            cout<<"enter the year of establishment: " <<endl;
            cin>>yearEst;
        }


    ///get functions
            string getSchName() {return SchName;}
            string getSchLocation() {return SchLocation;}
            int getYearOfEst() {return yearEst;}





    };


    class School
    {
        SchoolParameter sp;

public:
            SchoolParameter getParameters() {return sp;}

            virtual void setDetails()  /// a polymorphic function
            {
                sp.setParameters();
            }

            virtual void setD()=0;  /// a pure virtual function which makes the class abstract

            ///display function

            virtual void showDetails()   /// a polymorphic function
            {
                cout<<"School Name: " <<sp.getSchName() <<endl;
                cout<<"Year Established:  " <<sp.getYearOfEst() <<endl;
                cout<<"Location " <<sp.getSchLocation() <<endl;
                cout<<"State: " <<state <<endl;
                cout<<"City: " <<city <<endl;
            }

    };



    class University: public School
    {
        string viceChancellor;

    public:

        ~University()
        {

        }
            void setDetails()
            {
                cout<<"Vice Chancellor: " <<endl;
                getline(cin, viceChancellor);
                School::setDetails();
            }

            ///getter
            string getVC()
            {
                return viceChancellor;
            }

            void showDetails()
            {
                cout<<"VC: " <<viceChancellor<<endl;
                School::showDetails();
            }

           void setD()
            {
                University::setDetails();
            }

    };

    class Polytechnic: public School
    {

        string rector;

public:

        void setDetails()
        {
            School::setDetails();

            cout<<"Rector: " <<endl;
            getline(cin, rector);
        }

        ///getter()

        string getRector()
        {
            return rector;
        }

        void setD()
        {
            Polytechnic::setDetails();
        }


        void showDetails()
        {
            School::showDetails();
            cout<<"Rector: " <<getRector() <<endl;
        }

        ~Polytechnic()
        {}

    };


    ///Exception
    class MyException: public exception ///an exception class which must inherits from class exception
    {

    public:
             int year;
           void test()
        {

            cout<<"enter the year of establishment: " <<endl;
            cin>>year;
        }

    }; ///end of class exception


     template <class temp>  ///Template class
     class templateDemo
     {
        temp name, matricNum, department;
        temp level;
 public:

            temp setInfo(temp n, temp m, temp d, temp l)
            {
                name=n;
                department=d;
                matricNum=m;
                level=l;
            }

            void displayInfo()
            {
                cout<<"Template Class" <<endl;
                cout<<endl;
                cout<<"Name: " <<name <<endl;
                cout<<"Matric Number: " <<name <<endl;
                cout<<"Department: " <<name <<endl;
                cout<<"Level: " <<name <<endl;
            }
     };


    main()
{

   /** MyException e1;

    e1.test();


    try{    e1;
             if(e1.year <=0) throw e1;
             cout<<"Year of est. :" <<e1.year <<endl;
        }

    catch(MyException e1)
    {
        cout<<"invalid value entered";
    }
    */
    University u;
    template <University> u1;
}
