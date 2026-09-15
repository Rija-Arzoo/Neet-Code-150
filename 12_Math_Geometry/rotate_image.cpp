// Rotate Image
class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        vector<vector<int>> result(matrix.size(), vector<int>(matrix.size()));

int last = matrix.size() - 1;

for (int i = 0; i < matrix.size(); i++)
{
    for (int j = 0; j < matrix.size(); j++)
    {
        result[i][last - j] = matrix[j][i];
    }
}

matrix = result;   
    }
};



// class Solution {
// public:
//     void rotate(vector<vector<int>>& matrix) {
//        int n = matrix.size();
        
//         // Step 1: Transpose the matrix (swap elements across the main diagonal)
//         for (int i = 0; i < n; i++) {
//             for (int j = i + 1; j < n; j++) {
//                 swap(matrix[i][j], matrix[j][i]);
//             }
//         }
        
//         // Step 2: Reverse each row horizontally
//         for (int i = 0; i < n; i++) {
//             int left = 0, right = n - 1;
//             while (left < right) {
//                 swap(matrix[i][left], matrix[i][right]);
//                 left++;
//                 right--;
//             }
//         }
//     }
// };