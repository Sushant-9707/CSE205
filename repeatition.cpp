//search for frequency of repeating elements

#include <iostream>
using namespace std;

int main(){

    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    int arr[n];
    cout << "Enter the elements: " << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    bool foundRepeatingElement = false;
    cout << "Frequency of repeating elements:" << endl;

    for (int i = 0; i < n; i++) {
        bool alreadyCounted = false;
        for (int k = 0; k < i; k++) {
            if (arr[i] == arr[k]) {
                alreadyCounted = true;
                break;
            }
        }

        if (alreadyCounted) {
            continue;
        }

        int frequency = 1;
        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                frequency++;
            }
        }

        if (frequency > 1) {
            cout << arr[i] << " occurs " << frequency << " times" << endl;
            foundRepeatingElement = true;
        }
    }

    if (!foundRepeatingElement) {
        cout << "No repeating elements found." << endl;
    }

    return 0;

}
