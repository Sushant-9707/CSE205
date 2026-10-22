#include <iostream>
using namespace std;

void printrev(int n[], int size){
    if(size == 0){
        return;
    }
    cout << n[size-1] << " ";
    printrev(n, size-1);
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
        printrev(arr, size);
    return 0;
}