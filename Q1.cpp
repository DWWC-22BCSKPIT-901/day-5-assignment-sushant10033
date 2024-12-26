1.Searching a Number
Given an integer k and array arr. Your task is to return the position of the first occurrence of k in the given array and if element k is not present in the array then return -1.
Note: 1-based indexing is followed here.
Example1:
Input: k = 16 , arr = [9, 7, 16, 16, 4]
Output: 3




#include <iostream>
#include <vector>
using namespace std;

int findPosition(int k, const vector<int>& arr) {
    // Iterate through the array
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] == k) {
            return i + 1; // Return 1-based index
        }
    }
    return -1; // Return -1 if k is not found
}

int main() {
    int k = 16;
    vector<int> arr = {9, 7, 16, 16, 4};
    
    int result = findPosition(k, arr);
    cout << result << endl; // Output: 3
    
    return 0;
}
