#include <iostream>
using namespace std;

bool isUnique(int array[], int size) {
    for (int i = 0; i < size; i++){
        for (int j = i+1; j < size; j++){
            if (array[j] == array[i]){
                return false;
            }
        }

    }
    return true;
}

int main(){
    int array[] = {1, 2, 4, 3, 7, 6};
    int size = sizeof(array) / sizeof(array[0]);
    bool res = isUnique(array, size);
    cout << res << endl;
    
    return 0;
}