#include<iostream>
using namespace std;

int main() {
    int numA, numB;
    cout << "Input two integers:" << endl;
    cin >> numA >> numB;

    cout << "Bitwise AND: " << (numA & numB) << endl;
    cout << "Bitwise XOR: " << (numA ^ numB) << endl;
    cout << "Bitwise OR: " << (numA | numB) << endl;
    cout << "Left Shift (numA << 2): " << (numA << 2) << endl;
    cout << "Right Shift (numA >> 2): " << (numA >> 2) << endl;
    cout << "Bitwise NOT of numB: " << (~numB) << endl;

    return 0;
}
