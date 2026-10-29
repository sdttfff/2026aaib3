// week08-2.cpp 學習計畫 Matrix 第1題
// LeetCode 1672. Richest Customer Wealth
class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int M = accounts.size(), N = accounts[0].size();
        int ans = 0;
        for (int i=0; i<M; i++) {
            int now = 0;
            for (int j=0; j<N; j++) {
                now += accounts[i][j];
            }
            ans = max(ans, now);
        }
        return ans;
    }
};
