//翻转单词顺序列
class Solution {
public:
    string ReverseSentence(string &str) 
    {
        if(str.empty())
            return str;
		//注意string 与C串的区别
        //string 类型把' 0'当做普通字符处理，长度加一，可见' 0'不是结束字符，不含有特殊功能，string末尾不需加' 0'
        int pBegin = 0;
        int len = str.size();
        int pEnd = len - 1;
        // 翻转整个句子
        reverse(str, pBegin, pEnd);

        // 翻转句子中的每个单词
        pBegin = pEnd = 0;
        while(pBegin != len)
        {
            if(str[pBegin] == ' ')
            {
                pBegin ++;
                pEnd ++;
            }
            else if(str[pEnd] == ' ' || pEnd == len)
            {
                reverse(str, pBegin, --pEnd);
                pBegin = ++pEnd;
            }
            else
            {
                pEnd ++;
            }
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