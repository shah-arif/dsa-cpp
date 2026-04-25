#include <iostream>
using namespace std;

int linearSearch(int array[], int size, int target){
    
    for (int i = 0; i < size; i++){
        if (array[i] == target){
            return i;
        }
    }
    return -1;
}

int main(){
    int array[] = {1, 5, 14, 7, 22, 17, 9};
    int size = sizeof(array) / sizeof(array[0]);
    int res = linearSearch(array, size, 10);
    cout << res << endl;
    return 0;
}