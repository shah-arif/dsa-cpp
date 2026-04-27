#include <iostream>
#include <vector>
using namespace std;

int main(){
    // vector<int> vec;
    vector<int> vec = {1, 2, 3};
    // vector<char> vec = {'a', 'b', 'c', 'd'};
    // vector<int> vec(0, 5);
    // vec.push_back(4); // add in last
    // vec.push_back(5)
    // vec.pop_back(); // delete last one

    // int firsItem = vec.front(); // first element of vector
    // int lastItem = vec.back(); // last element of vector

    int targetItem = vec.at(2); // item in particular index
    bool isEqual = vec.at(1) == vec[1];
    
    // forEach loop
    // for (int i : vec){
    //     cout << i << " ";
    // }
    
    // cout << endl;
    // cout << "vector size: " << vec.size() << endl;

    // cout << firsItem << endl;
    // cout << lastItem << endl;
    // cout << targetItem << endl;
    cout << isEqual << endl;
    return 0;
}