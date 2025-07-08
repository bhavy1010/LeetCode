class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        int leftMax[20000];
        int rightMax[20000];

        leftMax[0] = height[0];
        rightMax[n-1] = height[n-1];

        int current = 0;

        for(int i = 1;i<n;i++){
            leftMax[i] = max(leftMax[i-1] , height[i-1]);
        }

        for(int i = n-2;i>=0;i--){
            rightMax[i] = max(rightMax[i+1] , height[i+1]);
        }
        int waterTraped = 0;
        for(int i=0;i<n;i++){
            current = (min(rightMax[i] , leftMax[i]) - height[i]);
            if(current > 0){
                waterTraped += current;
            }
        }
    return waterTraped;

    }
};