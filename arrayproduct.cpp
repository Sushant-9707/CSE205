//find product of all prime number in a array

#include <iostream>
using namespace std;
int primeloop(int a){
    int f = 1;
    for(int i = 2; i < a; i++){
        if(a % i == 0){
            f = 0;
        }
    }
    return f;
}

int main(){
    int n;
    cout << "Enter size of array: ";
    cin >> n;
    int arr[n];
    cout << "Enter elements of array: ";
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    int product = 1;
    for(int i = 0; i < n; i++){
        if(primeloop(arr[i])==1){
            product *= arr[i];
        }
    }

    cout << "Product is : " << product << endl;
    return 0;

}