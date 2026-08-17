#include <iostream>
using namespace std;

int main(){
    cout << "Enter number: ";
    int num;
    cin >> num;

    int original = num;
    int reversed = 0;

    while (num > 0) {
        reversed = reversed * 10 + num % 10;
        num /= 10;
    }

    if (original == reversed) {
        cout << "Palindrome";
    } else {
        cout << "Not a palindrome";
    }

}
