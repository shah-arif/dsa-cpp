#include <iostream>
using namespace std;

int findCommon(int arrayA[], int lengthA, int arrayB[], int lengthB, int result[]){
    int k = 0;

    for (int i = 0; i < lengthA; i++){
        for (int j = 0; j < lengthB; j++){
            if (arrayA[i] == arrayB[j]){
                result[k] = arrayA[i];
                k++;
                break;
            }
        }
    }
    return k;
}

int main(){

    int arrayA[] = {1, 2, 3, 4};
    int lengthA = sizeof(arrayA) / sizeof(arrayA[0]);
    int arrayB[] = {5, 4, 7, 2, 8};
    int lengthB = sizeof(arrayB) / sizeof(arrayB[0]);
    int commonNumbers[10];

    int count = findCommon(arrayA, lengthA, arrayB, lengthB, commonNumbers);
    
    for (int i = 0; i < count; i++){
        cout << commonNumbers[i] << " ";
    }
    cout << endl;
    
    return 0;
}