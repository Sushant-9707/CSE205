// type of sort
// selection, bubble, Insertion

// selection - minimum
// Bubble - compare neighborhood and place the largest at last
// Insertion - insert into sorted path


//selection sort
#include <iostream>
using namespace std;

void selection(int arr[], int n){
    for(int i = 0; i < n - 1; i++){
        int min = i;

        for(int j = i + 1; j < n; j++){
            if(arr[j] < arr[min]){
                min = j;
            }
        }
        int temp = arr[i];
        arr[i] = arr[min];
        arr[min] = temp;
    }
}

int main(){
    cout << "Enter number of elements: ";
    int n;
    cin >> n;

    int arr[n];

    cout << "Enter the elements: ";
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    selection(arr, n);

    cout << "Sorted array: ";
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }

    return 0;
}