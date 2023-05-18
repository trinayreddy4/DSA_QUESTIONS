/*coded by Trinayreddy Malireddy*/
/*problem link:https://leetcode.com/problems/factorial-trailing-zeroes/description/ */
class Solution {
public:
    int trailingZeroes(int n) {
        int res=0;
        for(int i=5;i<=n;i=i*5)
        {
            res=res+n/i;
        }
        return res;
    }
};
