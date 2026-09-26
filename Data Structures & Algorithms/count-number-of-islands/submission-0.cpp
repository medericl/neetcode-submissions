class Solution {
public:
    void flood_fill(vector<vector<char>>& grid, vector<vector<int>>& visited, int x, int y) {
        int height = grid.size();
        int weight = grid[0].size();
        visited[y][x] = 1;
        if (x < weight - 1 && visited[y][x+1] != 1 && grid[y][x+1] == '1')
            flood_fill(grid, visited, x + 1, y);

        if (x > 0 && visited[y][x-1] != 1 && grid[y][x-1] == '1')
            flood_fill(grid, visited, x - 1, y);

        if (y < height - 1 && visited[y+1][x] != 1 && grid[y+1][x] == '1')
            flood_fill(grid, visited, x, y + 1);

        if (y > 0 && visited[y-1][x] != 1 && grid[y-1][x] == '1')
            flood_fill(grid, visited, x, y - 1);
    }

    int numIslands(vector<vector<char>>& grid) {
        vector<int> vec(grid[0].size(), 0);
        vector<vector<int>> visited(grid.size(), vec);
        int x = 0;
        int y = 0;
        int cpt = 0;
        for (const auto &v : grid)
        {
        x = 0;
        for (const char &c : v)
        {
            if (c == '1' && visited[y][x] != 1)
            {
                std::cout << x << y << "\n";
                flood_fill(grid, visited, x, y);
                cpt++;
            }
            x++;
        }
        y++;
        }
        return cpt;
    }
};
