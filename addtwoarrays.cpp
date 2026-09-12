//take input for two arrays then add them and sort the new array and print the result

#include <iostream>
using namespace std;
int main(){
    
    int n1, n2;
    cout << "Enter the size of first array: ";
    cin >> n1;
    int arr1[n1];
    cout << "Enter elements of first array: ";
    for (int i = 0; i < n1; i++) {
        cin >> arr1[i];
    }

    cout << "Enter the size of second array: ";
    cin >> n2;
    int arr2[n2];
    cout << "Enter elements of second array: ";
    for (int i = 0; i < n2; i++) {
        cin >> arr2[i];
    }

    int n3 = n1 + n2;
    int arr3[n3];

    for (int i = 0; i < n1; i++) {
        arr3[i] = arr1[i];
    }
    for (int i = 0; i < n2; i++) {
        arr3[n1 + i] = arr2[i];
    }

    for (int i = 0; i < n3 - 1; i++) {
        for (int j = 0; j < n3 - i - 1; j++) {
            if (arr3[j] > arr3[j + 1]) {
                swap(arr3[j], arr3[j + 1]);
            }
        }
    }

    cout << "The sorted array after adding both arrays is: ";
    for (int i = 0; i < n3; i++) {
        cout << arr3[i] << " ";
    }
    
    return 0;
}