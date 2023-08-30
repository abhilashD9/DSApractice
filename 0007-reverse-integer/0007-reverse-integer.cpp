class Solution {
public:
    int reverse(int x) {
    int reverse = 0, digit = 0;
        while(x!=0)
        {
            if(((INT_MAX)/10)<reverse && reverse>0)
            {
                return 0;
            }
            else if((INT_MIN/10)>(reverse) && reverse<0)
            {
                return 0;
            }
            reverse *= 10;
            digit = x%10;
            reverse += digit;
            x = x/10;
        }
        return reverse;
    }
};