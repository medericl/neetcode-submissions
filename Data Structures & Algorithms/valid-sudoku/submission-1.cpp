class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        vector<int> rows(9,0);
        vector<int> cols(9,0);
        vector<int> squares(9,0);
        for (int i = 0; i < 9; i+=1)
        {
            fill(rows.begin(), rows.end(), 0);
            fill(cols.begin(), cols.end(), 0);
            fill(squares.begin(), squares.end(), 0);
            for (int j = 0; j < 9; j+=1)
            {
                // int s_j = ((i * 3) % 3) + (j % 3);
                // int s_i = ((j * 3) % 3) + (i % 3);
                int s_i = (i / 3) * 3 + j / 3;
                int s_j = (i % 3) * 3 + j % 3;

                if (board[i][j] != '.' && rows[board[i][j] - '1']) {
                    std::cout << "hello 1" <<"\n";
                    return false;
                }
                if (board[j][i] != '.' && cols[board[j][i] - '1']) {
                    std::cout << "hello 2" <<"\n";
                    return false;
                }
                if (board[s_i][s_j] != '.' && squares[board[s_i][s_j] - '1']) {
                    std::cout << "hello 3" <<"\n";
                    return false;
                }

                if (board[i][j] != '.')
                    rows[board[i][j] - '1'] = 1;
                if (board[j][i] != '.')
                    cols[board[j][i] - '1'] = 1;
                if (board[s_i][s_j] != '.')
                    squares[board[s_i][s_j] - '1'] = 1;
            }
        }
        return true;
    }
};

