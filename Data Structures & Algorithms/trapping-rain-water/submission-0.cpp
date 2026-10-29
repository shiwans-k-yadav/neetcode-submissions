class Solution {
public:
    int trap(vector<int>& height) {
        //Solution using array
        int n = height.size();
        vector<int> left_Max(n,0);
        vector<int> right_Max(n,0);
        int lmax=-1,rmax=-1;
        for(int i=0;i<n;i++){
            if(height[i]>lmax){
                lmax=height[i];
            }
            left_Max[i]=lmax;
        }
        for(int i=n-1;i>=0;i--){
            if(height[i]>rmax){
                rmax=height[i];
            }
            right_Max[i]=rmax;
        }


        int sum=0;
        for(int i=0;i<n;i++){
            int h = min(left_Max[i],right_Max[i])-height[i];
            sum+=h;
        }

        return sum;

    }
};
