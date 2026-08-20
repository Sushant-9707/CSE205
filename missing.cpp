//find missing element
#include <iostream>
using namespace std;

int main(){
    int arr[7] = {1,2,3,4,6,7};
    int n = 7;
    for(int i = 1; i <= n; i++){
        int found = 0;
        for(int x = 0; x < n-1; x++){
            if(arr[x] == i){
                found = 1;
            }
        }
        if(found == 0){
            cout << "Missing number is: " << i << endl;
        }
    }

    return 0;
}
