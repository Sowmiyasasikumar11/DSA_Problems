class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {

        vector<bool> ans;

        int maxCandy = candies[0];

        for(int i = 1; i < candies.size(); i++)
        {
            if(candies[i] > maxCandy)
            {
                maxCandy = candies[i];
            }
        }

        for(int i = 0; i < candies.size(); i++)
        {
            if(candies[i] + extraCandies >= maxCandy)
            {
                ans.push_back(true);
            }
            else
            {
                ans.push_back(false);
            }
        }
        return ans;
    }
};