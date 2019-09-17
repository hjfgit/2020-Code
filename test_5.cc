#include <iostream>
#include <vector>
class Solution {
public:
    /**
     *      * @param A: sorted integer array A
     *      * @param B: sorted integer array B
     *      * @return: A new sorted integer array
     *      lintcode：合并两个有序数组
     *      1、新建一个vector，进行尾插；
     *                     */
    vector<int> mergeSortedArray(vector<int> &A, vector<int> &B) {
        // write your code here
        vector<int> v;
        size_t pos_1 = 0;
        size_t pos_2 = 0;
        size_t sz_1 = A.size();
        size_t sz_2 = B.size();
        while(pos_1 < sz_1 && pos_2 < sz_2){
            if(A[pos_1] < B[pos_2]){
                v.push_back(A[pos_1++]);
            }else{
                v.push_back(B[pos_2++]);
            }
        }
        if(pos_1 == sz_1){
            for(size_t i = pos_2; i < sz_2; ++i){
                v.push_back(B[i]);
            }
        }else{
            for(size_t i = pos_1; i < sz_1; ++i){
                v.push_back(A[i]);
            }
        }
        return v;

    }
};
