//IMPLEMENTING ABSTRACTION IN OOPS.
#include<iostream>
using namespace std;

//abstract class 
class AbstractEmployee {
        virtual void AskForPromotion()=0; //pure vitrtual function
        //implement virtual function in the normal class
};

class Employee:AbstractEmployee {
private:
        string Name;
        string Company;
        int Age;

public:
//--------------------------------------------
        void setName(string name){
                Name = name;
        }
        string getName(){
                return Name;
        }
//--------------------------------------------
        void setCompany(string company){
                Company = company;
        }
        string getCompany(){
                return Company;
        }
//--------------------------------------------
        void setAge(int age){
                Age = age;
        }
        int getAge(){
                return Age;
        }
//--------------------------------------------
//implementing virtual function        
        void AskForPromotion(){
                if(Age>30)
                        std::cout<<Name<<" got promoted!" << std::endl;
                else
                        std::cout<<Name<<" try next time, sell your soul." << std::endl;
        }
//--------------------------------------------
Employee(string name, string company, int age){
        Name = name;
        Company = company;
        Age = age;
}
};

//____________________________________________________________________

int main(){
        Employee helloo = Employee("hello", "world", 22); 
        helloo.AskForPromotion();

        Employee belloo= Employee("bello", "world", 44); 
        belloo.AskForPromotion();
}