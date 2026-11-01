class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m = matrix.size();
        int n = matrix[0].size();
        int i=0,j=(m*n)-1;
        while(i<=j){
            int mid = i+(j-i)/2;
            int ele = matrix[mid/n][mid%n];
            if(ele==target){
                return true;
            }
            else if(ele>target){
                j=mid-1;
            }
            else{
                i=mid+1;
            }
        }
        return false;
    }
};
