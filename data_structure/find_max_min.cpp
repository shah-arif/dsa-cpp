#include <iostream>
#include <climits>
using namespace std;

int main(){
    int nums[] = {14, 74, 2, 18, -11, 56, -6, 40};
    int length = sizeof(nums) / sizeof(int);

    int smallest = INT_MAX;
    int largest = INT_MIN;

    for(int i = 0; i < length; i++){
        // v1
        // if (nums[i] < smallest){
        //     smallest = nums[i];
        // }
        // if (nums[i] > largest){
        //     largest = nums[i];
        // }

        // v2
        smallest = min(nums[i], smallest);
        largest = max(nums[i], largest);
    }
    cout << "smallest: " << smallest << endl;
    cout << "largest: " << largest << endl;
    
    return 0;
}