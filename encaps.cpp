// implementing encapsualtion using getters and setters 

#include <iostream>
using namespace std;
class Employee{
private:
        string Name;
        string Company;
        int Age;
public:
        void setName(string name){//setter
            Name = name;    
        }
        string getName(){//getter
                return Name;
        }
        
//-----------------------------------------------------        
        void setCompany(string company){//setter
                Company = company;
        }
        string getCompany(){//getter
                return Company;
        }

//-----------------------------------------------------        
        void setAge(int age){//setter
                if (age>=18)//setting parameter
                Age = age; 
        }
        int getAge(){//getter
                return Age;
        }
//-----------------------------------------------------        
//employee constructor
        Employee(string name, string company, int age){
                Name = name;
                Company = company;
                Age = age;
        }
};
int main()
{
        Employee helllo = Employee("hello", "cat", 69);
        helllo.setAge(79);
        cout<<"helllo's age is "<<helllo.getAge(); //accesing methods needs barackets...
}


//when using getter and setters we can set parameters for accessing 