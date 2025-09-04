/*

Understand - Finding the max average in a subarray of size k.

Match - Sliding window.

Plan - 
1. Set i to the start of the array and a j to the element at k - 1 to make a window.
2. Find the sum in that window.
3. Move j forward and add that element and i forward and remove that element from the sum.
4. Find the avg of that sum/k and store that in maxAvg.
5. Do this in a loop and whenever the avg is bigger than maxAvg set maxAvg to avg. 
6. Return maxAvg.

Runtime - O(n).

*/

class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int i = 0;
        int j = k - 1;
        int sum = 0;
        for (int c = 0; c < k; c++){
            sum+=nums[c];
        }
        double maxAverage = sum*1.0/k;
        while (j < nums.size() - 1){
            if (sum*1.0/k > maxAverage)
                maxAverage = sum*1.0/k;
            j++;
            sum += nums[j];
            sum -= nums[i];
            i++;
        }
        if (sum*1.0/k > maxAverage)
            maxAverage = sum*1.0/k;
        return maxAverage;
        
    }
};
