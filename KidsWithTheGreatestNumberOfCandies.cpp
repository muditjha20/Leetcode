/*
Input - [2,3,5,1,3] extra candies = 3
output - [T,T,T,F,T]

Plan -
Check if adding the extra candies to each kid's candies would result in a greater number of candies than the max candies with one kid.

constraints - there are atleast 2 kids, each kid has 1 or more candies and max 100 candies. Extra candies are atleast 1 and atmost 50

*/

class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool> answer;
        int maximum = -1;
        for(int i = 0; i < candies.size(); i++){
            if (candies[i] > maximum)
                maximum = candies[i];
        }
        for (int i = 0; i < candies.size(); ++i){
            if (candies[i] + extraCandies >= maximum)
                answer.push_back(true);
            else answer.push_back(false);
        }
        return answer;
    }
};