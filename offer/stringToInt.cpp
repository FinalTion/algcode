//把字符串转换为整数
class Solution {
public:
    int StrToInt(string str) 
    {
        //const char* cstr = str.c_str(); //很重要的技巧，当输入不是const char*时，不能使用NULL
        int num = 0, i = 0;
        int len = str.size();
        if (i < len)
        {
            int head = 1;
            if (str[i] == '+')
                i++;
            else if (str[i] == '-')
            {
                i++;
                head = -1;
            }

            while (i != len)
            {
                if (str[i] >= '0' && str[i] <= '9')
                {
                    num = num * 10 + (str[i] - '0');

                    if ((head > 0 && num > 0x7FFFFFFF) || (head < 0 && num < (signed int) 0x80000000))
                    {
                        num = 0;
                        break;
                    }
					i++;
                } else
                {
                    num = 0;
                    break;
                }
            }
            num = head * num;
        }
        return num;
    }
};