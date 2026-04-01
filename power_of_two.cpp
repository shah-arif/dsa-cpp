#include <iostream>
using namespace std;

// Find if a number is power of 2
bool isPowerOf2(int num){
    return num > 0 && (num & (num - 1)) == 0;
    // if (num == 0) return false;
    // while(num > 1){
    //     if (num % 2 != 0){
    //         return false;
    //     }
    //     num /= 2;
    // }
    // return true;
}

int main(){
    int num = 65;

    if (isPowerOf2(num)){
        cout << "Power of 2" << endl;
    } else {
        cout << "Not Power of 2" << endl;

    }


    
    return 0;
}