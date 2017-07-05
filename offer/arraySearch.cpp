//二维数组中的查找
class Solution {
public:
    bool Find(int target, vector<vector<int> > array) 
    {
        bool found = false;
        int rows = array.size();
        int cols = array[0].size();
        if (!array.empty() && rows > 0 && cols > 0)
        {
            int row = 0;
            int col = cols - 1;
            while (row <rows && col >= 0)
            {
                
                if (array[row][col] == target)
                {
                    found = true;
                    break;
                }else if (array[row][col] < target)
                {
                    row++;
                }else
                {
                    col--;
                }
            }
        }
        return found;
    }
};