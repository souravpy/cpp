#include<iostream>
using namespace std;
int main(){
        int arr[5] = {0, 1, 2, 3, 4};
        int *ptr ,*ptr1, *ptr2, *ptr3, *ptr4;
        ptr1 = arr; //points to zeroth index
        ptr2 = arr + 1 ; //points to zeroth index
        ptr3 = arr + 2; //points to zeroth index
        ptr4 = arr + 3; //points to zeroth index
        cout <<"ptr = "<<ptr<<endl;
        cout <<"*ptr = "<<*ptr<<endl;
        // cout <<"*ptr"<<*ptr<<endl;

        cout <<"ptr = "<<ptr<<endl;
        cout <<"ptr1 = "<<ptr1<<endl;
        cout <<"ptr2 = "<<ptr2<<endl;
        cout <<"ptr3 = "<<ptr3<<endl;
        cout <<"ptr4 = "<<ptr4<<endl;
}