//swap values

#include <iostream>
using namespace std;

void swap(int &a, int &b){
    int temp = b;
    b = a;
    a = temp;
}

int main(){
    int a, b;
    cout << "Enter value for a: ";
    cin >> a;
    cout << "Enter value for b: ";
    cin >> b;
    swap(a, b);
    cout << a << " " << b << endl;
    return 0;
}