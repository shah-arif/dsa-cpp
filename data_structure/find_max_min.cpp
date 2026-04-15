#include <iostream>
#include <climits>
using namespace std;

int main(){
    int nums[] = {14, 74, 2, 18, -11, 56, -6, 40};
    int length = sizeof(nums) / sizeof(int);

    int smallest = INT_MAX;
    int largest = INT_MIN;

    int smallest_index = 0;
    int largest_index = 0;

    for(int i = 0; i < length; i++){
        // v1
        if (nums[i] < smallest){
            smallest = nums[i];
            smallest_index = i;
        }
        if (nums[i] > largest){
            largest = nums[i];
            largest_index = i;
        }

        // v2
        // with implicit function
        // smallest = min(nums[i], smallest);
        // largest = max(nums[i], largest);
    }
    cout << "smallest: " << smallest << " index: " << smallest_index << endl;
    cout << "largest: " << largest << " index: " << largest_index << endl;
    
    return 0;
}