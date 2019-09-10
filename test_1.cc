class Solution {
public:
    /*
     *      * @param n: A long integer
     *      * @return: An integer, denote the number of trailing zeros in n!
     *      求尾部的0，思路，如果所有数字遍历，时间复杂度过大，可以转化为数5的个数。
     *                */
    long long trailingZeros(long long n) {
        // write your code here, try to do it without arithmetic operators.
        long long num = n;
        long long res = 0;
        while( num / 5 ){
            res += num / 5;
            num = num / 5;
        }
        return res;
    }
};
