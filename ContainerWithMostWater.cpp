/*
Understand - we are finding the max area of water that can be stored in a container with hieght equal to the ones in the array.

Match - 2 pointers.
Plan - 

1. set a pointer i to start and j to end. 
2. While i < j:
3. Find the area by multiplying j-i with the minimum height from either j or i.
4. If that area is bigger than maxArea set maxArea to that area.
5. Then whichever height is smaller, move that pointer either forward or inward. Since the smaller height is causing the area to be smaller.
6. After the loop ends, return maxArea.

Runtime - O(n)

*/

class Solution {
public:
    int maxArea(vector<int>& height) {
        int i = 0;
        int j = height.size() - 1;
        int maxArea = 0;
        int area = 0;
        while (i <= j){
            area = (j-i) * min(height[i], height[j]);
            if (area > maxArea)
                maxArea = area;
            if (height[i] <= height[j])
                i++;
            else j--;
        }
        return maxArea;
    }
};
