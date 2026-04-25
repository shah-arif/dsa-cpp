#include <iostream>
using namespace std;

void reverseArray(int array[], int size) {
    int start = 0 , end = size - 1;
    
    while (start < end) {
        swap(array[start], array[end]);
        start++;
        end--;
    }
    
}

int main(){
    int array[] = {1, 2, 5, 14, 55, 1, 25};
    int size = sizeof(array) / sizeof(array[0]);
    reverseArray(array, size);
    for (int i = 0; i < size; i++){
        cout << array[i] << " ";
    }
    cout << endl;
    return 0;
}