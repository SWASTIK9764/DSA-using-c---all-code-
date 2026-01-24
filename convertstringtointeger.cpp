#include <iostream>
#include <string>
using namespace std;

int main() {
    
    // String with numeric value
    string str = "1234";
    
    // stoi converts string to integer
    int num = stoi(str);           
    cout << "Converted integer: " << num;
    return 0;
}