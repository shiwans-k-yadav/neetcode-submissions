class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {
        int n =weights.size();
        int i = *max_element(weights.begin(),weights.end());
        int sum=0;
        for(int i=0;i<n;i++){
            sum+=weights[i];
        }
        int j=sum,ans=0;
        while(i<=j){
            int mid = i+(j-i)/2;

            int d=1,c=0;
            for(int k=0;k<n;k++){
                if(c+weights[k]<=mid){
                    c+=weights[k];
                }
                else{
                    d++;
                    c=weights[k];
                }
            }
            if(d<=days){
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