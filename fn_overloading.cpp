#include<iostream>
using namespace std;

// for function overloading 
// function name must be same, 
// must have different number or 
// different datatype of parameter
// function can have same return datatype
// ------------------------------------
// *overloaded function with same datatype parameter gives error*

void printer(int a){
        cout<<a<<endl;
}

void printer(float a){
        cout<<a<<endl;
}

void printer(char a){
        cout<<a<<endl;
}


int main(){
//making code to print values of different datatypes
int a=69;
float b=42.2;
char c='s';
printer(a);
printer(b);
printer(c);
}