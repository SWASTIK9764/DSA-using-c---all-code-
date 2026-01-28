#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cout << "Enter three numbers: ";
    cin >> a >> b >> c;

    double avg = (a + b + c) / 3.0;

    cout << "Average: " << avg << endl;
    return 0;
}