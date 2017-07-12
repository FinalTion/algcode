//左旋字符串
class Solution {
public:
    string LeftRotateString(string &str, int n) 
    {
        int nLength = str.size();
        if(!str.empty() && n <= nLength && n >= 0)
        {
            int pFirstStart = 0;
            int pFirstEnd = n - 1;
            int pSecondStart = n;
            int pSecondEnd = nLength - 1;

            // 翻转字符串的前面n个字符
            reverse(str, pFirstStart, pFirstEnd);
            // 翻转字符串的后面部分
            reverse(str, pSecondStart, pSecondEnd);
            // 翻转整个字符串
            reverse(str, pFirstStart, pSecondEnd);
        }
        return str;
    }
    void reverse(string &str, int begin, int end)
    {
        while(begin < end)
        {
            char tmp = str[begin];
            str[begin] = str[end];
            str[end] = tmp;
            begin++;
            end--;
        }
    }
};