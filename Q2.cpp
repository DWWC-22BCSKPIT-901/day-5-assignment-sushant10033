2.Find Target Indices After Sorting Array.

You are given a 0-indexed integer array nums and a target element target.

A target index is an index i such that nums[i] == target.

Return a list of the target indices of nums after sorting nums in non-decreasing order. If there are no target indices, return an empty list. The returned list must be sorted in increasing order.

Example 1:

Input: nums = [1,2,5,2,3], target = 2
Output: [1,2]
Explanation: After sorting, nums is [1,2,2,3,5].
The indices where nums[i] == 2 are 1 and 2.



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
