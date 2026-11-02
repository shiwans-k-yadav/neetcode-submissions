class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {
        int n =weights.size();
        int i = *max_element(weights.begin(),weights.end());
        int sum=0;
        for(int i=0;i<n;i++){
            sum+=weights[i];
        }

        for(int cap=i;cap<=sum;cap++){
            int d=1,c=0;
            for(int j=0;j<n;j++){
                if(c+weights[j]<=cap){
                    c+=weights[j];
                }
                else{
                    d++;
                    c=weights[j];
                }
            }

            if(d<=days){
                return cap;
            }

        }
        return -1;
    }
};