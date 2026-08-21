#include <iostream>
using namespace std;

int main(){
    int arr[3][3];
    for(int x = 0; x < 3; x++){
        for(int i = 0; i < 3; i++){
            cin >> arr[x][i];
        }
    }

    cout << endl;
    
    for(int i = 0; i < 3; i++){
        for(int x = 0; x < 3; x++){
            cout << arr[x][i] << " ";
        }
        cout << endl;
    }
}
