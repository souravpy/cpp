#include<iostream>
using namespace std;

// pointers in cpp
int main(){
        int var = 69;  // declaring variable
        int *pointvar; // creating pointer
        //can also be (int var *point)
        // pointer stores adress, so assign the adress
        pointvar = &var;
        cout << "pointvar : " << pointvar << endl; // contains adress var
        cout << "*pointvar : " << *pointvar << endl; // contains value of var 
        cout << "var : " << var << endl; // contains var
        cout << "&var : " << &var << endl; // contians adress of var
}
