#include <iostream>
using namespace std;
int main() {
    int choose;
    cout<<"1.addition\n";
    cout<<"2.sub\n";
    cout<<"3.mul\n";
    cout<<"4.div \n";
    cout<<"choose which operation you want to perform:";
    cin>>choose;
    int num1,num2;
    cout<<"Enter the first number:";
    cin>>num1;
    cout<<"Enter the second number:";
    cin>>num2;
    int value;

    switch(choose){
        case 1:
        value=num1+num2;
        cout<<"Addition of two numbers:"<< value;
        break;
        case 2:
        value=num1-num2;
        cout<<"Subtraction of two numbers:"<<value;
        break;
        case 3:
        value=num1*num2;
        cout<<"multiplication of two numbers:"<<value;
        break;
        case 4:
        value=num1/num2;
        cout<<"divided of two numbers:"<<value;
        break;
    }
    
    
}