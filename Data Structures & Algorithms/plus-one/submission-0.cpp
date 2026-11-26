class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n = digits.size();
        for(int i=n-1;i>=0;i--){
            if(i==0 && digits[i]==9){
                digits[i]=0;
                digits.resize(n);
                digits.push_back(1);
                reverse(digits.begin(),digits.end());
                break;
            }
            if(digits[i]<9){
                digits[i]++;
                break;
            }
            else{
                digits[i]=0;
            }
        }
        return digits;
    }
};
