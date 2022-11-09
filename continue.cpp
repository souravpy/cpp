//continue used to skip the condition and continue with the rest of loop
#include<iostream>
using namespace std;
int main(){
        for(int i=1; i<=10; i++){
                if (i == 8){
                        continue;
                }
                cout<< i << endl;
                
        }
        return 0;
}