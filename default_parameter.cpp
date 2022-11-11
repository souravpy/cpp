#include<iostream>
using namespace std;
// default parameter in functions:
// >> int function(int a = 4, int b = 7)
int summer(int a=10, int b=10){
        return(a+b);
}

int main(){
        //function calling block
        int a, b, c;

        cout<<"enter a : "<<endl;
        // cin >>a;
        cout<<"enter b : "<<endl;
        // cin >>b;
        c=summer(a,10);
        cout<<"sum is : "<<c<<endl;
}