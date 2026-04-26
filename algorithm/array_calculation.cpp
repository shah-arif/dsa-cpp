#include <iostream>
using namespace std;

int sumOfArray(int array[], int size){
    int sum = 0;
    for (int i = 0; i < size; i++){
        sum = sum + array[i];
    }
    return sum;
}

int productOfArray(int array[], int size){
    int product = 1;
    for (int i = 0; i < size; i++){
        product = product * array[i];
    }
    return product;
}

int main(){
    int array[] = {1, 2, 3, 4, 4};
    int size = sizeof(array) / sizeof(array[0]);
    int sum = sumOfArray(array, size);
    int product = productOfArray(array, size);
    cout << "Sum: " << sum << endl;
    cout << "Product: " << product << endl;


    return 0;
}