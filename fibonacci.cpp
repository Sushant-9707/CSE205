//write fibonacci series upto n terms
#include <iostream>
using namespace std;

int main(){
    int num;
    cout << "Enter the number of terms: ";
    cin >> num;

    int t1 = 0, t2 = 1;
    int t;
    for(int x = 1; x <= num; x++){
        cout << t1 << " ";
        t = t1 + t2;
        t1 = t2;
        t2 = t;
    }

}