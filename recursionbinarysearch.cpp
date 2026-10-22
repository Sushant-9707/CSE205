//binary search using recursion
#include <iostream>
using namespace std;

int binarysearch(int arr[], int i, int j, int key){
    if(i > j){
        return -1;
    }
    int mid = (i + j) / 2;
    if(arr[mid] == key){
        return mid;
    }
    else if(arr[mid] > key){
        return binarysearch(arr, i, mid - 1, key);
    }
    else{
        return binarysearch(arr, mid + 1, j, key);
    }
}


int main(){

    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int size = sizeof(arr) / sizeof(arr[0]);
    int key;
    cout << "Enter key: ";
    cin >> key;
    int result = binarysearch(arr, 0, size - 1, key);
    if(result != -1){
        cout << "found at index: " << result << endl;
    }
    else{
        cout << "Key not found" << endl;
    }
    return 0;
}