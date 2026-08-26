#include <iostream>
using namespace std;

int main() {
    int arr[] = {10, 5, 20, 8, 15};
    int n = 5;

    for (int i = 0; i < n - 1; i++) {

        for (int j = 0; j < n - i - 1; j++) {

            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }

        if (i == 2) {
            break;
        }
    }

    cout << "Third largest element: " << arr[n - 3] << endl;

    return 0;
}