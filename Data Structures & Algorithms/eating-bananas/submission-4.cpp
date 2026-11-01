class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int k=-1;
        for(int i=0;i<piles.size();i++){
            if(k<piles[i]){
                k=piles[i];
            }
        }
        int ans=0;
        int i=1,j=k;
        while(i<=j){
            int mid = i+(j-i)/2;
            long long hours=0;
            for(int a=0;a<piles.size();a++){
                hours+=(piles[a]+mid-1)/mid;
            }
            if(hours<=h){
                ans=mid;
                j=mid-1;
            }
            else{
                i=mid+1;
            }

        }
        return ans;
    }
};
