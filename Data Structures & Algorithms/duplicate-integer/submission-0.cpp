class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        int cnt =0;
        bool repeat = false;
        int n = nums.size();
        for(int i=0;i<n;i++){
            int seen = nums[i];
            for(int j=i+1;j<n;j++){
                if(nums[j]==seen){
                    cnt++;
                }
                if(cnt>=1){
                   return true;
                }
            }
        }
        return false;
    }
};