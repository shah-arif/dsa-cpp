#include <iostream>
using namespace std;

int main(){

    // Modifiers: long, short, long long, signed, unsigned


    cout << sizeof(int) << endl; // 4
    cout << sizeof(long int) << endl; // 8
    cout << sizeof(short int) << endl; // 8
    cout << sizeof(long long int) << endl; // 8
    cout << sizeof(long long) << endl; // 8

    unsigned int x = -10;
    cout << x << endl; // 4294967286

    
    return 0;
}