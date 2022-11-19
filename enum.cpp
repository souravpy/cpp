#include<iostream>
using namespace std;
// enum 
enum week{mon, tue, wed, thur ,fri, sat, sun}; //defining enum
int main(){
        week today; // enum object
        today = tue; // assiging value to object
        cout <<" today : "<<today;

}