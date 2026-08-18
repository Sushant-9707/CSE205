//delete a element at a index from a array.

#include <iostream>
using namespace std;

int main(){
    int num;
    cout << "enter the number of element: ";
    cin >> num;
    int arr[num];
    cout << "enter the elements: " << endl;
    for(int i = 0; i < num; i++){
        cin >> arr[i];
    }
    int n = sizeof(arr) / sizeof(arr[0]);
    int index;
    cout << "enter the index of element to delete: ";
    cin >> index;
    cout << endl;
    for(int i = index; i < n - 1; i++){
        arr[i] = arr[i + 1];
    }
    n--;
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    return 0;
}