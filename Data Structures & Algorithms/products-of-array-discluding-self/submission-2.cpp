class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        //Prefix ans suffix sum Pattern
        int n = nums.size();
        vector<int> left(n,0),right(n,0),ans;

        int prodL=1,prodR=1;
        // Left
        for(int i=0;i<n;i++){
            left[i]=prodL;
            prodL*=nums[i];
        }
        //Right 
        for(int i=n-1;i>=0;i--){
            right[i]=prodR;
            prodR*=nums[i];
        }
        // Answer
        for(int i=0;i<n;i++){
            ans.push_back(left[i]*right[i]);
        }
        return ans;


    }
};
