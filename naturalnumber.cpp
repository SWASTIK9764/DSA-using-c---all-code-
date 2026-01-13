#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number:";
    cin>>n;
    if(n>0){
        for(int i=n;i<=100;i++)
        {
        cout<<i <<" ";
        }
    }
    else if(n==0){
        cout<<"not a natural number:";
    }
    else{
        cout<<"negative number:";
    }
}