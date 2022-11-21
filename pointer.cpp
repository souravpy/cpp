#include<iostream>
using namespace std;

// pointers in cpp
//pointer must have same datatype as variable it is pointing to
int main(){
        int var = 69;  // declaring variable
        int *pointvar; // creating pointer
        //can also be (int var *point)
        pointvar = &var; //pointer points to adress of var
        cout << "pointvar : " << pointvar << endl; // contains adress var
        cout << "*pointvar : " << *pointvar << endl; // contains value of var 
        cout << "var : " << var << endl; // contains var
        cout << "&var : " << &var << endl; // contians adress of var
}
// *ptr the pointer is represnted by star. 
//  &add adress is represented by &.
