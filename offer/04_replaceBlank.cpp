//替换空格
class Solution {
public:
    void replaceSpace(char *str, int length) 
    {
        if (str == NULL || length <= 0)
            return;
        int origLen = 0;
        int numOfBlank = 0;
        int i = 0;
        while (str[i] != '\0')
        {
            origLen++;
            if (str[i] == ' ')
                numOfBlank++;
            i++;
        }
        //注意此处origLen和numOfBlank均不包含\0
        int newLen = origLen + numOfBlank * 2;
        if (newLen > length)
            return;
        int indexOrig = origLen;
        int indexNew = newLen;
        while (indexOrig >= 0)
        {
            if (str[indexOrig] == ' ')
            {
                str[indexNew--] = '0';
                str[indexNew--] = '2';
                str[indexNew--] = '%';
                
            }else
            {
                str[indexNew--] = str[indexOrig];
            }
            indexOrig--;
        }
    }
};