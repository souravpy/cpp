#include<iostream>
using namespace std;

//function with return value and argument 
int summer(int a, int b){
        return(a+b);
}
//function without return but with argument
void subtr(int a, int b){
        int c;
        c=a-b;
        cout << "subtracton is : "<< c <<endl;
}

int main(){
int a, b, c;
cout<<"enter number 1: "<<endl;
cin>> a;
cout<<"enter number 2: "<<endl;
cin>> b;
//calling the void function
subtr(a,b);
// calling the normal function
c=summer(a,b);
cout<<"sum is : "<< c <<endl;

}