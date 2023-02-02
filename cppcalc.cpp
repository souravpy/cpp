#include<iostream>
using namespace std;

class Calculator{
private:
        double num1, num2;
public:
       void inputnum(){
                cout<<"enter the first number";
                cin>>num1;
                cout<<"enter the second number";
                cin>>num2;
       } 
        double add(){
                return num1+num2;
        }
        double subtract(){
                return num1-num2;
        }
        double multiply(){
                return num1*num2;
        }
        double divide(){
                return num1/num2;
        }
};
int main(){
        Calculator calculator; //initiating an object of class calculator
        calculator.inputnum();

        cout<<"select 1 for sum"<<endl;
        cout<<"select 2 for subtraction"<<endl;
        cout<<"select 3 for muliplication"<<endl;
        cout<<"select 4 for divison"<<endl;

        int expression;   
        cin>>expression;
        switch (expression)
        {
        case 1:
                cout<<calculator.add();
                break;
        case 2:
               cout<<calculator.subtract();
                break;
        case 3:
                cout<<calculator.multiply();
                break;
        case 4:
                cout<<calculator.divide();
                break;
        default:
                cout<<calculator.add();
                break;
        }

        
}