//find volume of cuboid
#include <iostream>
using namespace std;

void volume(int l, int h, int b){
    cout << "Volume is : " << b*h*l << endl;
}

int main(){
    int l, b, h;
    cout << "Enter the length of cuboid : ";
    cin >> l;
    cout << "Enter the height of cuboid: ";
    cin >> h;
    cout << "Enter the breadth of cuboid: ";
    cin >> b;

    volume(l,h,b);
}
