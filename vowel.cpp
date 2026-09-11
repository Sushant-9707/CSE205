//count number of vowels in a string

#include <iostream>
#include <string>
using namespace std;

int main(){
    string str;
    cout << "Enter a string: ";
    getline(cin, str);
    int count = 0;
    for(int i = 0; i < str.length(); i++){
        char ch = (str[i]);
        if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U'){
            count++;
        }
    }
    cout << "Number of vowels in the string: " << count << endl;

    return 0;
}