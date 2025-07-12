class Solution {
public:
    int maxArea(vector<int>& height) {
        int left = 0, right = height.size() - 1; // Two pointers: start and end
        int area = 0; // To keep track of maximum area found
        int high = 0; // To store current minimal height between left and right

        while (left < right) { // Continue until the pointers meet
            // Find which of the two lines is shorter
            high = min(height[left], height[right]);

            // Compute area: shorter height * width between lines
            area = max(area, high * (right - left));

            // Move past lines that are not taller than current 'high'
            // because they cannot help get a higher area
            while (left < right && height[left] <= high) left++;
            while (left < right && height[right] <= high) right--;
        }

        return area; // Return the maximum area found
    }
};