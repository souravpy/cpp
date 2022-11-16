#include<iostream>
using namespace std;

// pointers in cpp
int main(){
        int var = 69; //declaring variable
        int *pointvar; //creating pointer
        // pointer stores adress, so assign the adress
        pointvar = &var;
        cout<<"pointvar : "<<pointvar <<endl;
        cout<<"*pointvar : "<<*pointvar <<endl;
        cout<<"var : "<<var <<endl;
        cout<<"&var : "<<&var <<endl;
}
