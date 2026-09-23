#include <iostream>
using namespace std;

int main() {

    cout << "Enter size: ";
    int n;
    cin >> n;

    int arr[n];

    cout << "Enter array: ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Enter the index to find: ";
    int index;
    cin >> index;

    int nearest = -1;

    for(int distance = 1; distance < n; distance++) {

        int left = index - distance;

        if(left >= 0 && arr[left] > arr[index]) {
            nearest = left;
            break;
        }

        int right = index + distance;

        if(right < n && arr[right] > arr[index]) {
            nearest = right;
            break;
        }
    }

    if(nearest != -1)
        cout << "Nearest greater element: " << arr[nearest] << endl;
    else
        cout << "No greater element";

    return 0;
}