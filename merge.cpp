#include <iostream>
using namespace std;

int main() {
    int n, m;

    cout << "Enter length of arr1: ";
    cin >> n;

    int arr1[n];

    cout << "Enter elements of arr1:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr1[i];
    }

    cout << "Enter length of arr2: ";
    cin >> m;

    int arr2[m];

    cout << "Enter elements of arr2:\n";
    for (int i = 0; i < m; i++) {
        cin >> arr2[i];
    }

    int arr[n + m];

    for (int i = 0; i < n; i++) {
        arr[i] = arr1[i];
    }

    for (int i = 0; i < m; i++) {
        arr[n + i] = arr2[i];
    }

    cout << "Merged array: ";
    for (int i = 0; i < n + m; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}