class Solution {
public:
    int mySqrt(int x) {
        int l=0,e=x;
        int res=0;
        while(l<=e){
            int m = l+(e-l)/2;
            if((long long)m*m > x){
                e=m-1;
            }
            else if((long long)m*m < x){
                res=m;
                l=m+1;
            }
            else{
                return m;
            }
        }
        return res;
    }
};