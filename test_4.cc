class Solution {
public:
    /**
     *      * @param k: An integer
     *      * @param n: An integer
     *      * @return: An integer denote the count of digit k in 1..n
     *      统计数字出现的个数
     *                     */
    int digitCounts(int k, int n) {
        // write your code here
        if (k > 9 || k < 0){
            return -1;
        }
        if (n == k){
            return 1;
        }
        int count = 0;
        int sum = 1;
        int temp = 0;
        int value = n;
        int n_temp = -1;
        while(value != 0)
        {

            temp = value - (value/10)*10;
            if(temp > k)
            {
                count += (value/10)*sum + sum;
            }
            else if(temp == k)
            {
                count += (value/10)*sum + n - value*sum + 1;
            }
            else
            {
                count += (value/10)*sum;
            }
            n_temp += sum;
            sum *= 10;
            value /= 10;
        }
        if(0 == k)
            count -= n_temp;
        return count;
    }
};
