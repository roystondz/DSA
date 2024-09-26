class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int result=0;
        for (int c : nums)
            result^=c;
        return result;
    }
};
