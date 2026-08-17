#include <iostream>
using namespace std;

int main(){
    cout << "Enter the number: ";
    int num;
    cin >> num;
    int flag = 0;
    for(int i = 2; i < num; i++){
        if(num%i==0){
            flag = 1;
            break;
        }
    }
    if(flag == 0){
        cout << "Prime number" << endl;
    }
    else{
        cout << "Not a prime number" << endl;
    }
}