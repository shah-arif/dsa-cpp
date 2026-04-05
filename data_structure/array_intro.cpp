#include <iostream>
using namespace std;

int main(){
    // int marks[5] = {100, 98, 36, 54, 88};
    // // marks[0] = 101;
    // cout << marks[-1] << endl;
    // cout << marks[1] << endl;
    // cout << marks[2] << endl;
    // cout << marks[3] << endl;

    // double price[] = {120.25, 43.05, 42.56};


    // 0 to n-1

    // int marks[5] = {100, 98, 36, 54, 88};

    // int sz = sizeof(marks) / sizeof(int);

    // for (int i = 0; i < sz; i++) {
    //     cout << marks[i] << endl;
    // }

    int size = 5;
    int marks[size];

    for (int i = 0; i < size; i++) {
        cin >> marks[i];
    }

    for (int i = 0; i < size; i++) {
        cout << marks[i] << endl;
    }




    return 0;
}