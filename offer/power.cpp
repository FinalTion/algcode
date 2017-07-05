//数值的整数次方
class Solution {
public:
    double Power(double base, int exponent) 
    {
    	if (equal(base, 0.0))
            return 0.0;
      	int exp = exponent >= 0 ? exponent : -exponent; 
        double result = powercore(base, exp);
        if (exponent < 0)
            result = 1.0 / result;
        return result;
    }
    
    double powercore(double base, int exp)
    {
        if (exp == 0)
            return 1;
        if (exp == 1)
            return base;
        double result = powercore(base, exp>>1);
        result *= result;
        if (exp &0x1 == 1)
            result *= base;
        return result;
    }
    
    bool equal(double num1, double num2)
    {
        if (num1 - num2 < 0.000001 && num1 - num2 > -0.000001)
            return true;
        else
            return false;
    }
};