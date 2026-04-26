#include <iostream>
#include <climits>
using namespace std;

void swapMaxMin(int array[], int size){
    int smallest = INT_MAX;
    int largest = INT_MIN;

    int smallest_index = 0;
    int largest_index = 0;

    for (int i = 0; i < size; i++){
        if (array[i] < smallest){
            smallest = array[i];
            smallest_index = i;
        }
        if (array[i] > largest){
            largest = array[i];
            largest_index = i;
        }
    }
    swap(array[smallest_index], array[largest_index]);
}

int main(){
    int array[] = {4, 1, 5, 10, 6};
    int size = sizeof(array) / sizeof(array[0]);
    swapMaxMin(array, size);
    for (int i = 0; i < size; i++){
        cout << array[i] << " ";
    }
    cout << endl;
    
    return 0;
}