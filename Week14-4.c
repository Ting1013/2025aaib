// week14-4.cpp
// Leetcode 73. Set Matrix Zeroes

class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int M = matrix.size(), N = matrix[0].size(); // M: rows, N: columns

        vector<int> left(M), up(N); // Markers for rows and columns

        // First pass: mark rows and columns that should be zeroed
        for (int i = 0; i < M; i++) {
            for (int j = 0; j < N; j++) {
                if (matrix[i][j] == 0) {
                    left[i] = 7; // mark the row
                    up[j] = 7; // mark the column
                }
            }
        }

        // Second pass: set zeroes where marked
        for (int i = 0; i < M; i++) {
            for (int j = 0; j < N; j++) {
                if (left[i] == 7 || up[j] == 7) {
                    matrix[i][j] = 0;
                }
            }
        }
    }
};
