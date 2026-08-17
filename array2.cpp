#include <iostream>
using namespace std;

int main(){
    int arr[] = {2,4,6,8};
    int n = sizeof(arr)/sizeof(arr[0]);
    int val = 1;
    cout << "before insetion at start" << endl;
    for(int u = 0; u < n; u++){
        cout << arr[u] << " ";
    }
    cout << endl;
    cout << "after insertion" << endl;

    for(int i = n; i > 0; i--){
        arr[i] = arr[i-1];
    }
    arr[0] = val;
    n++;
    
    for(int u = 0; u < n; u++){
        cout << arr[u] << " ";
    }
    cout << endl;

    cout << "Before insertion at end" << endl;
    int val2 = 9;

    int arr2[] = {1,3,5,7};
    int n2 = sizeof(arr2)/sizeof(arr2[0]);
    for(int u = 0; u < n2; u++){
        cout << arr2[u] << " ";
    }
    cout << endl;
    cout << "After insertion" << endl;
    arr2[n2] = val2;
    n2++;
    for(int u = 0; u < n2; u++){
        cout << arr2[u] << " ";
    }
    
    cout << endl;

    int arr3[] = {1,2,3,4,5};
    int n3 = sizeof(arr3)/sizeof(arr3[0]);
    int val3 = 6;
    cout << "Enter index for insertion : ";
    int index;
    cin >> index;
    cout << "Before insertion at index " << index << ": ";
    for(int u = 0; u < n3; u++){
        cout << arr3[u] << " ";
    }
    cout << endl;

    for(int i = n3; i > index; i--){
        arr3[i] = arr3[i-1];
    }
    arr3[index] = val3;
    n3++;

    cout << "After insertion at index " << index << ": ";
    for(int u = 0; u < n3; u++){
        cout << arr3[u] << " ";
    }
    cout << endl;

    return 0;


}