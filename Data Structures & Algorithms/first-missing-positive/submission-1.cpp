class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int n = nums.size();
        int a=1;
        for(int i=0;i<=n;i++){
            int chk=false;
            for(int j=0;j<n;j++){
                if(a==nums[j]){
                    chk=true;
                    break;
                }
            }
            if(chk==false){
                return a;
            }
            a++;
        }
        return 0;

    }
};