class Solution {
public:
    int maxArea(vector<int>& heights) {
        int n = heights.size();
        int ans=0;
        int i=0,j=n-1;
        while(i<j){
            int height = min(heights[i],heights[j]);
            int width = (j+1)-(i+1);
            int area = height*width;

            if(area>ans){
                ans=area;
                if(heights[i]<heights[j]){
                    i++;
                }
                else{
                    j--;
                }
            }
            else if(heights[i]<heights[j]){
                i++;
            }
            else{
                j--;
            }
        }
        return ans;
    }
};
