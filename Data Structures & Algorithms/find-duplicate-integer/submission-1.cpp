class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int slow=0,fast=0;
        //Phase 1
        while(true){
            slow = nums[slow];
            fast = nums[nums[fast]];
            if(fast==slow){
                break;
            }
        }


        //Phase 2
        slow=0;
        while(slow!=fast){
            slow=nums[slow];
            fast=nums[fast];
            if(slow==fast){
                break;
            }
        }
        return slow;
    }
};
