#include<iostream>
using namespace std;
//using pointer to struct

struct dist{ 
        int feet; 
        float inch;
};

int main(){
        dist *ptr, d; // declaring pointer
        ptr = &d;
        cout << "enter feet : ";
        cin >> (*ptr).feet; 
        cout << "enter inch : ";
        cin >> (*ptr).inch ; 

        cout << "distance is : " <<(*ptr).feet<<" feet "<<(*ptr).inch<<" inch "<<endl;
        return 0;
}
