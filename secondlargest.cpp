//find the second largest element in an array.

#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter number of elements: ";
    cin >> n;


    int arr[n];
        cout << "enter the elements: " << endl;
        for(int j=0; j<n; j++){
            cin >> arr[j];
        }
    int larg = arr[0];
    int slarg = arr[0];
    for(int i=0; i<n; i++){
        if(arr[i] > larg){
            slarg = larg;
            larg = arr[i];
        }
        
    }
    cout << "second largest: " << slarg << endl;
    return 0;
}
