class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n,0);
        int prod=1,cnt=0;
        for(int i=0;i<n;i++){
            prod*=nums[i];
            if(nums[i]==0){
                cnt++;
            }
        }

        if(cnt>1){
            return ans;
        }
        //find prod without zero
        int withoutZ =1;
        for(int i=0;i<n;i++){
            if(nums[i]==0){
                continue;
            }
            withoutZ*=nums[i];
        } 
        for(int i=0;i<n;i++){
            if(nums[i]==0){
                ans[i]=withoutZ;
            }
            else{
                ans[i] = prod/nums[i];
            }
        }
        return ans;
    }
};
