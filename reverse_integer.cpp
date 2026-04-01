#include <iostream>
using namespace std;

// Find reverse of a number. e.g. 123 -> 321

int reverseOf(int n){
    int rev = 0;
    while(n > 0){
        int lastDigit = n % 10;
        rev = rev * 10 + lastDigit;
        n /= 10;
    }
    return rev;
}


int main(){
    int n = 123;
    cout << reverseOf(n) << endl; // 321
    
    return 0;
}