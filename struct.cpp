#include<iostream>
using namespace std;
//struct in cpp, isnt data, but datatype
// defining struct
struct car{
        int hp = 669; //default argument
        char name;
        int top_speed = 300;
        int weight;
};

void display_prop(car Porche){
        cout<<"car's name is" << Porche.name<<endl;     
}

int main(){
        struct car Porche;
        int hp = 666; //default argument
        char name = 't';
        int top_speed = 350;
        int weight = 1696;
}