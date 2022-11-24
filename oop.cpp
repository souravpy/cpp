#include<iostream>
using namespace std;
class pet{
        public: // access modifiers are necessary to declare
                string name; // declaring attributes
                int legs;

                void display_name(){
                        cout<<"name is"<<name;
                }
};
// class and struct have semi colons after.
int main(){
        //creating object dog
        pet dog;

        // declaring attributes of dog
        dog.name = "pluto";        
        dog.legs = 4;  

        // accessing the variable
        cout << dog.name <<""<< dog.legs <<endl;
        //needs empty space to seperate veariables

        //  pet{dog(pluto, 4), sheep(bakki, 4)}

        // object.method
        dog.display_name();

}