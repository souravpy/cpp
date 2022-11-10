#include<iostream>
using namespace std;
int summer(int a, int b){
        return(a+b);
}
int main(){
int a, b, c;
cout<<"enter number 1: "<<endl;
cin>> a;
cout<<"enter number 2: "<<endl;
cin>> b;
c=summer(a,b);
cout<<"sum is : "<< c <<endl;

}