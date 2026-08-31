//write code for linear search algorithm 
#include <iostream>
using namespace std;

int linearsearch(int arr[], int a, int n){
    for(int i = 0; i < n; i++){
        if(arr[i] == a){
            return i;
        }
    }
    return 0;
}

int main(){
    int a;
    cout << "Enter number of elements in the array: ";
    cin >> a;

    cout << "Enter the elements: " << endl;
    int arr[a];
    for(int i = 0; i < a; i++){
        cin >> arr[i];
    }

    int n;
    cout << "Enter the element to search: ";
    cin >> n;
    
    int s = linearsearch(arr, n, a);
    if(s == 0){
        cout << "Element not found.";
    }
    else{
        cout << "Element found at index : " << s << endl;
    }

    return 0;

}