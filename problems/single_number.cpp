#include <iostream>
#include <vector>
using namespace std;

int singleNumber(vector<int>& nums) {
    int ans = 0;
    for (int val : nums) {
        ans = ans ^ val;
    }
    return ans;
}

int main(){
    vector<int> vec = {1, 2, 1, 7, 2, 3, 3};
    int res = singleNumber(vec);
    cout << res << endl;    

    
    return 0;
}