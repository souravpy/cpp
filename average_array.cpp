#include<iostream>
using namespace std;
//finding average of arr
int main(){
        double arr[10]={0,1,2,3,4,5,6,7,8,9,};
        double sum=0;
        double avg;
        double size=0;
        for(const int &i : arr){ // i is pointer
                sum += i;
                ++size;
        }
        avg=sum/size;
        cout<<avg<<endl;
        cout<<sum<<endl;
        return 0;


}