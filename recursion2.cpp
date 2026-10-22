//write a recursion function to remove all odd integers fromo an array
//do not use any extra space or print in the function
//example: arr = {1,2,3,4,5,6} 
//output: arr = {2,4,6}

#include <iostream>
using namespace std;

void removeOdd(int arr[], int &size, int index = 0) {
    if (index >= size) {
        return;
    }
    
    if (arr[index] % 2 != 0) {
        for (int i = index; i < size - 1; i++) {
            arr[i] = arr[i + 1]; 
        }
        size--; 
        removeOdd(arr, size, index); 
    } else {
        removeOdd(arr, size, index + 1);
    }
}

int main(){
    int arr[] = {1,2,3,4,5,6};
    int size = sizeof(arr) / sizeof(arr[0]);
    removeOdd(arr, size);
    for(int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}