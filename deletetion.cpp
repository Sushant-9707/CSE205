#include <iostream>
using namespace std;

int main() {

    int n;
    cout << "Enter the number of elements in array: ";
    cin >> n;

    int arr[n];

    cout << "Enter the elements of array:" << endl;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int x;
    cout << "Enter the index of element to be deleted: ";
    cin >> x;

    if (x < 0 || x >= n) {
        cout << "Invalid index!";
        return 0;
    }
    
    for (int i = x; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }

    n--;

    cout << "Array after deletion: ";

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}