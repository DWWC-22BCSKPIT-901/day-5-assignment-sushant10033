3. Search Insert Position.
Given a sorted array of distinct integers and a target value, return the index if the target is found. If not, return the index where it would be if it were inserted in order.
You must write an algorithm with O(log n) runtime complexity.
Example 1:
Input: nums = [1,3,5,6], target = 5
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> targetIndices(vector<int>& nums, int target) {
    // Step 1: Sort the array
    sort(nums.begin(), nums.end());

    // Step 2: Find indices where nums[i] == target
    vector<int> result;
    for (int i = 0; i < nums.size(); i++) {
        if (nums[i] == target) {
            result.push_back(i); // Add the index to the result
        }
    }

    // Step 3: Return the result
    return result;
}

int main() {
    vector<int> nums = {1, 2, 5, 2, 3};
    int target = 2;

    vector<int> indices = targetIndices(nums, target);
    
    // Output the result
    for (int index : indices) {
        cout << index << " ";
    }
    cout << endl; // Output: 1 2

    return 0;
}
