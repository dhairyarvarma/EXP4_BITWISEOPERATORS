#include<iostream>
using namespace std;

int main() {
    int setInput, resetInput, setPos, resetPos;

    cout << "Enter a value to apply bit set: ";
    cin >> setInput;

    cout << "Which bit position to set (0-7)? ";
    cin >> setPos;

    cout << "Enter a value to apply bit reset: ";
    cin >> resetInput;

    cout << "Which bit position to reset (0-7)? ";
    cin >> resetPos;

    if (setPos < 0 || setPos > 7 || resetPos < 0 || resetPos > 7 || setInput > 128 || resetInput > 128) {
        cout << "Error: Input or bit position out of range." << endl;
        return 1;
    }

    int afterSet = setInput | (1 << setPos);
    int afterReset = resetInput & ~(1 << resetPos);

    cout << "Result after setting bit: " << afterSet << endl;
    cout << "Result after resetting bit: " << afterReset << endl;

    return 0;
}
