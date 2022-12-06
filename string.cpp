#include<iostream>
using namespace std;
//strings = array of characters.
// string rev(string a){
        // for(int i = size(a) ; i>0 ; i-- ){
// 
        // }
void length(string a){
        for(int i = size(a) ; i>0 ; i++ ){
                cout << i;
        }
}
int main(){
        // c style
        char str1[11]; 
        cout<<"enter text as much"<<endl;
        cin.get(str1, 100); // str input c style
        cout << "you have entered : " << str1 << endl;
//        cin >> str1; // takes only one input
        
        // cpp style, stl library
        string str2;
        getline(cin, str2); //input
        cout << "you have entered : " << str2 << endl;

}
