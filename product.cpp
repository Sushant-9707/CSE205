//product of all digits of a number.

#include <iostream>
using namespace std;

int main(){
    int num;
    cout << "Enter a number: ";
    cin >> num;

    int product = 1;
    int temp = num;
    while (temp > 0) {
        product = product * (temp % 10);
        temp = temp / 10;
    }
    cout << "Product of all digits: " << product << endl;
    return 0;
}