class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int m = image.size(), n = image[0].size();
        int source_color = image[sr][sc];
        image[sr][sc] = color;
        if (source_color == color) return image;
        queue<pair<int, int>> Q;
        Q.push({sr, sc});
        int dr[4]= {0, 0, 1, -1}, dc[4] = {1, -1, 0, 0};
        while (!Q.empty()) {
            auto p = Q.front();
            Q.pop();
            int row = p.first, col = p.second;
            for (int i = 0; i < 4; i++) {
                int r = row + dr[i], c = col + dc[i];
                if (r >= 0 && r < m && c >= 0 && c < n && image[r][c] == source_color) {
                    image[r][c] = color;
                    Q.push({r, c});
                }
            }
        }
        return image;
    }
};