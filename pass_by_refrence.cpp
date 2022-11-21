// passing by refernce with or without using pointers.
#include<iostream>
using namespace std;
void swap(int &a, int &b){ //passing address of variables
        int temp; //declaring temp var
        temp = a;
        a = b;
        b = temp;
}
void swap_ptr(int* a, int* b){ //has pointer as parameter
        int temp; //declaring temp var
        temp = *a;
        *a = *b;
        *b = temp;
}

int main(){
        int a = 1, b = 2; //declaring two var at once
        cout << "before swapping" << endl;
        cout << " a = " << a <<endl;
        cout << " b = " << b <<endl;

        swap(a,b); //swap using address of var 
        
        cout << "after swapping" << endl;
        cout << " a = " << a <<endl;
        cout << " b = " << b <<endl;

        cout << "_____________________" <<endl;
        
        cout << "before swapping" << endl;
        cout << " a = " << a <<endl;
        cout << " b = " << b <<endl;
        
        swap_ptr(&a,&b);

        cout << "after swapping" << endl;
        cout << " a = " << a <<endl;
        cout << " b = " << b <<endl;

        return 0;
}