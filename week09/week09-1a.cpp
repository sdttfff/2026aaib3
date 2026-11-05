class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int N = mat.size();
        int ans = 0;

        // 主對角線（左上到右下）
        for (int i = 0; i < N; i++) {
            ans += mat[i][i];
        }

        // 副對角線（右上到左下）
        for (int i = 0; i < N; i++) {
            ans += mat[N - 1 - i][i];
        }

        // 若矩陣大小為奇數，扣除重複加到的中心點
        if (N % 2 == 1) {
            ans -= mat[N / 2][N / 2];
        }

        return ans;
    }
};
