class Solution {
public:
    int reverse(int x) {
        int y = 0;
        while (x!=0){
            int z = x%10;
            if (y<INT_MIN/10 || y > INT_MAX/10) // if I increment 10 more times, will it exceed the 2^31 constraint
                return 0;
            y=y*10+z;
            x/=10;
        }
        return (int) y;
    }
};
