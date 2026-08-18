//find index of target element in an array.

#include <iostream>
using namespace std;

int main(){

    int num;
    cout << "Enter number of elements: ";
    cin >> num;

    cout << "Enter the elements: " << endl;
    int arr[num];
    for(int i = 0; i < num; i++){
        cin >> arr[i];
    }

    int target;
    cout << "Enter target element:" << endl;
    cin >> target;

    int index = -1;
    int n = sizeof(arr) / sizeof(arr[0]);
    for(int i = 0; i < n; i++){
        if(arr[i] == target){
            index = i;
            break;
        }
    }
    if(index != -1){
        cout << "Target element found at index: " << index << endl;
    } else {
        cout << "Target element not found." << endl;
    }
    return 0;
}