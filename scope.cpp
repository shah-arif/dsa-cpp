#include <iostream>
using namespace std;

int x = 10;

void funx(){
    cout << x << endl;
    int y = 5;
}

int main(){
    funx(); // 10
    cout << x << endl; // 10
    // cout << y ; // error
    return 0;
}