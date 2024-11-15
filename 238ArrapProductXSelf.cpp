class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n =nums.size();
        vector<int> ans(n,1);

        //loop for prefix
        
        for(int i=1;i<nums.size();i++){
            ans[i]=ans[i-1]*nums[i-1];
        }

        //lopp for suffix
        int suffix=1;
        for(int j=n-2;j>=0;j--){
            suffix*=nums[j+1];
            ans[j]*=suffix;
        }

        return ans;
    }
};
