class Solution {
public:
    int maxProfit(vector<int>& prices) {
        vector<int> p1(prices.size() + 1, 0);
        vector<int> p2(prices.size() + 1, 0);

        for (int i = 0; i < prices.size(); i++)
        {
            int i_end = prices.size() - 1 - i;
            if (i_end == prices.size() - 1)
                p1[i_end] = prices[i_end];
            else
            {
                p1[i_end] = std::max(p1[i_end + 1], prices[i_end]);
            }
                
            if (i == 0)
                p2[i] = prices[i];
            else
                p2[i] = std::min(p2[i-1], prices[i]);

        }
        int max = 0;
        for (int i = 0; i < prices.size(); i+=1)
        {
            max = std::max(max, p1[i] - p2[i]);
        }
        
        return max;
    }
};
