11.	Search in 2D Matrix.
You are given an m x n integer matrix matrix with the following two properties:
Each row is sorted in non-decreasing order.
The first integer of each row is greater than the last integer of the previous row.
Given an integer target, return true if target is in matrix or false otherwise.

  #include <iostream>
#include <vector>
using namespace std;

bool searchMatrix(vector<vector<int>>& matrix, int target) {
    if (matrix.empty() || matrix[0].empty()) return false;

    int m = matrix.size();       // Number of rows
    int n = matrix[0].size();    // Number of columns
    int left = 0, right = m * n - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;
        int midValue = matrix[mid / n][mid % n]; // Calculate row and column

        if (midValue == target) {
            return true; // Target found
        } else if (midValue < target) {
            left = mid + 1; // Search right half
        } else {
            right = mid - 1; // Search left half
        }
    }
    return false; // Target not found
}

int main() {
    vector<vector<int>> matrix = {
        {1, 3, 5, 7},
        {10, 11, 16, 20},
        {23, 30, 34, 60}
    };
    int target = 3;

    bool result = searchMatrix(matrix, target);
    cout << (result ? "true" : "false") << endl; // Output: true

    return 0;
}

