/*



‘1’的个数等于除了最低位之外的‘1’的个数加上最低位‘1’的个数，即ret[n] = ret[n>>1] + n%2，具体代码：


*/




class Solution {
public:
    vector<int> countBits(int num) {
        vector<int> ret(num+1, 0);
        for(int i=1; i<=num; ++i)
            ret[i] = ret[i>>1] + i%2;
        return ret;
    }
};