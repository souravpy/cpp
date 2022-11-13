#include<iostream>
using namespace std;
// inserting elements in an array
int main(){
        // int arr[11];
        // for (int i=0; i<=11; i++){
                // arr[i]=i;
        // cout<<arr[i]<<endl;
        // }
        //cout<<arr; //cant cout array at once without loops

        //---------------------------------------
        //replacing elements in array
        int numb[10]={0,1,2,3,4,5,6,7,8,9};
        numb[3]=4;
        cout<<numb;
        for (int i : numb){
                cout<<i;
        }

}
