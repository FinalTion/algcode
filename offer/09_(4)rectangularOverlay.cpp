//矩形覆盖
class Solution {
public:
    int rectCover(int number) 
        {
    	if(number*2 < 2)
      	{
        	return 0;
       	}
        if(number*2 == 2)
        {
            return 1;
        }
        if(number*2 == 4)
            return 2;
        return rectCover((number-1))+rectCover(number-2);
    }
};
