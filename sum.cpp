//sum of first and last digit of a number
#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    //num = 123

    int fd = num;  //fd = 123
    while (fd > 10) {
        fd = fd / 10; // 123, 12, 1. 1 < 10, exit loop, fd = 1.
    }

    int ld = num % 10; //123, reminder = 3, ld = 3

    int sum = fd + ld; //add
    cout << "Sum: " << sum << endl;

    return 0;
}