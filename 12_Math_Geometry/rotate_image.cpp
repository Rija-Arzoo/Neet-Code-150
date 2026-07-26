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
