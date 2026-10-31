class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int n = nums.size();
        if(nums[0]>=target){
            return 0;
        }
        int i=0,j=n-1;
        while(i<=j){
            int mid = i+(j-i)/2;
            if(nums[mid]==target){
                return mid;
            }
            if((mid+1)<n && nums[mid]<target && nums[mid+1]>target){
                return mid+1;
            }
            if(nums[mid]>target){
                j=mid-1;
            }
            else{
                i=mid+1;
            }
        }
        
        return i;
    }
};