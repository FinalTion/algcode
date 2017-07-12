//顺时针打印矩阵
class Solution {
public:
    vector<int> printMatrix(vector<vector<int> > matrix) 
    {
        if (!matrix.size())
            return result;
        int rows = matrix.size();
        int columns = matrix[0].size();
        int start = 0;
        while (columns > start * 2 && rows > start * 2)
        {
            matrixcircle(matrix, columns, rows, start);
            start++;    
        }
        return result;
    }
    
    void matrixcircle(vector<vector<int> > &matrix, int columns, int rows, int start)
    {
        int endX = columns - 1 - start;
        int endY = rows - 1 - start;
        
        for (int i = start; i <= endX; i++)
        {
            int number = matrix[start][i];
            result.push_back(number);
        }
        
        if (start < endY)
        {
            for (int i = start + 1; i <= endY; i++)
            {
                int number = matrix[i][endX];
                result.push_back(number);
            }
        }
        
        if (start < endX && start < endY)
        {
            for (int i = endX - 1; i >= start; i--)
            {
                int number = matrix[endY][i];
                result.push_back(number);
            }
        }
        
        if (start < endX && start < endY - 1)
        {
            for (int i = endY - 1; i >= start + 1; i--)
            {
                int number = matrix[i][start];
                result.push_back(number);
            }
        }
    }
private:
    vector<int> result;
};