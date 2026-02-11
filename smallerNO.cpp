// finding smaller number among two number

// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main() {
    int num1,num2;
    cout<<"Enter the first number:";
    cin>>num1;
    cout<<"Enter the second number:";
    cin>>num2;
    if(num1>num2){
        cout<<"Number 1 is smaller";
    }
    else if(num1<num2){
        cout<<"Number 2 is smaller";
    }
    else{
        cout<<"Number is equal";
    }
}