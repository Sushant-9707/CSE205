//take two values where one is greater than other and find remainder.

#include <iostream>
using namespace std;

int main(){

    int a, b;
    cout << "Enter larger value: ";
    cin >> a;
    cout << "Enter smaller value: ";
    cin >> b;
    while(b > a){
        cout << "Enter smaller value!" << endl;
        cin >> b;
    }
    cout << a%b << endl;
    return 0;
}