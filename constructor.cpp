#include<iostream>
using namespace std;
// constructor code, inside and outside class definition
class hello{
        public:
                hello(){  //constructor that prints whenever an variable is declared
			cout<<"hello world"<<endl;

                }
};
int main(){
        hello hii; // declaring an object hii
		return 0;
} 



// declaring object calls the print constructor
// as the constructor gets executed as soon as the object is declared
// outputs 
