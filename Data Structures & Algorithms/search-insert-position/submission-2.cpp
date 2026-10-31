class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int n = nums.size();
        if(nums[0]>=target ){
            return 0;
        }
        for(int i=0;i<n-1;i++){
            if(nums[i]==target){
                return i;
            }
            if(nums[i]<target && target<nums[i+1]){
                return i+1;
            }
        }
        if(nums[n-1]==target){
            return n-1;
        }
        else{
            return n;
        }
    }
};