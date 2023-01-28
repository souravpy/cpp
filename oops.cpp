#include <iostream>
using namespace std;

class Employee{
public:
        string Name;
        string Company;
        int Age;

        void tester(){
                cout<<"calling method in constructor"<<endl;
        }

        //default constructor
        Employee(){
                Name = "default";
                Company = "default";
                Age = 69;
                tester();
        }

        //parameterised constructor
        Employee(string name, string company, int age){
                Name = name;
                Company = company;
                Age = age;
        }

        void ledger(){
                cout<<"my name is- "<<endl;
                cin>>Name; 
                cout<<"my company is- "<<endl;
                cin>>Company; 
                cout<<"my age is- "<<endl;
                cin>>Age; 
        }
        void intro(){
                cout<<"Hello world"<<endl;
                cout<<"my name is- "<<Name<<endl;
                cout<<"my company is- "<<Company<<endl;
                cout<<"my age is- "<<Age<<endl;
        }
};
int main()
{
        Employee eminem; // defining an object
        eminem.Age = 69; // defining attribute . 
        eminem.Name = "slim shady";
        eminem.Company = "rap";
        eminem.ledger();
        eminem.intro();

        // Employee eminem; // defining an object
        // eminem.Age = 69; // defining attribute . 
        // eminem.Name = "slim shady";
        // eminem.Company = "rap";
        // eminem.ledger();
        // eminem.intro();

        // Employee eminem; // defining an object
        // eminem.Age = 69; // defining attribute . 
        // eminem.Name = "slim shady";
        // eminem.Company = "rap";
        // eminem.ledger();
        // eminem.intro();

        // problem is we have to initiate multiple times whenever an object is defined
        // code becomes messy
        // constructors come to play

       Employee hello = Employee() ;
       hello.intro();

       Employee bello = Employee("brian", "microsoft", 22);


}