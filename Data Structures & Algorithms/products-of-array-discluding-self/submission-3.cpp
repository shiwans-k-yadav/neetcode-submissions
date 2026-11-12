class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        //Prefix ans suffix sum Pattern
        int n = nums.size();
        vector<int>ans(n,0);

        int prodL=1,prodR=1;
        // Left
        for(int i=0;i<n;i++){
            ans[i]=prodL;
            prodL*=nums[i];
        }
        //Right 
        for(int i=n-1;i>=0;i--){
            ans[i]*=prodR;
            prodR*=nums[i];
        }
        return ans;


    }
};
