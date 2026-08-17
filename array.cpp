#include <iostream>
using namespace std;

int main(){
    //data type
    //int : every element will be int.
    //char : every element will be a character.
    //float : 


    //name of array
    //size : total capacity of array.
    //array is fixed in size.

    //array of int:
    int arrint[5] = {};
    int n = sizeof(arrint)/sizeof(arrint[0]);
    arrint[0] = 1;
    arrint[4] = 5;
    for(int i=0; i<n; i++){
        cout<<arrint[i] << " ";
    }

    //Use = {} to initialize all elements to their default values.
    //Default value according to data type:
    //int : 0
    //float : 0.0
    //bool : false
    //char : space

    cout << endl;

    char arrchar[5] = {};
    int m = sizeof(arrchar)/sizeof(arrchar[0]);
    arrchar[0] = 'a';
    arrchar[4] = 'e';
    for(int i=0; i<m; i++){
        cout<<arrchar[i] << " ";
    }

    cout << endl;

    return 0;
}
