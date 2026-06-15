class Solution {
public:
    int minCostToMoveChips(vector<int>& position) {
        int n=position.size();
        int evencount=0;
        int oddcount=0;
        for(int i=0;i<n;i++)
        {
            if(position[i]%2==0)
               evencount++;
            else 
               oddcount++;
        }
        return min(evencount,oddcount);
    }
};