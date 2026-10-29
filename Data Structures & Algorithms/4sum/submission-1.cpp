class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>> ans;
        sort(nums.begin(),nums.end());
        int n = nums.size();
        for(int i=0;i<n;i++){
            //to avoid duplicate
            if(i>0 && nums[i]==nums[i-1]) continue;

            for(int j=i+1;j<n;j++){
                //to avoid duplicate
                if(j>i+1 && nums[j]==nums[j-1]) continue;

                int a=j+1,k=n-1;

                while(a<k){
                    long long sum = (long long)nums[i]+(long long)nums[j] + (long long)nums[a] + (long long)nums[k];

                    if(sum<target){
                        a++;
                    }
                    else if(sum>target){
                        k--;
                    }
                    else{   //sum==target
                        ans.push_back({nums[i],nums[j],nums[a],nums[k]});
                        a++;
                        k--;

                        //to avoid duplicates
                        while (a < k && nums[a] == nums[a - 1]) {
                            a++;
                        }
                        while (a < k && nums[k] == nums[k + 1]) {
                            k--;
                        }
                    }
                }
            }
        }
        return ans;
    }
};