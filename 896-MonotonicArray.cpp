class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        int n = nums.size();
        int temp = 0 , remp = 0;
        for(int i = 1;i<n;i++){
            if(nums[i] <= nums[i-1]){
                temp++;
            }
            if(nums[i] >= nums[i-1]){
                remp++;
            }
        }
        if(temp == (n-1) || remp == (n-1)){
            return true;
        }else{
            return false;
        }
    }
};