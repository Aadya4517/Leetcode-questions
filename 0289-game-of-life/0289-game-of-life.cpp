class Solution {
public:
    void gameOfLife(vector<vector<int>>& board) {

        int rows = board.size();
        int cols = board[0].size();

        int dx[] = {-1, 1, 0, 0, -1, -1, 1, 1};
        int dy[] = {0, 0, 1, -1, 1, -1, 1, -1};

        vector<vector<int>> marked(rows, vector<int>(cols, 0));

        for(int r = 0; r < rows; r++) {
            for(int c = 0; c < cols; c++) {

                int count = 0;

                for(int i = 0; i < 8; i++) {

                    int newrow = r + dx[i];
                    int newcol = c + dy[i];

                    if(newrow >= 0 && newrow < rows &&
                       newcol >= 0 && newcol < cols) {

                        if(board[newrow][newcol] == 1)
                            count++;
                    }
                }

                if(board[r][c] == 1) {

                    if(count == 2 || count == 3)
                        marked[r][c] = 1;
                    else
                        marked[r][c] = 0;

                }
                else {

                    if(count == 3)
                        marked[r][c] = 1;
                    else
                        marked[r][c] = 0;
                }
            }
        }

        for(int r = 0; r < rows; r++) {
            for(int c = 0; c < cols; c++) {
                board[r][c] = marked[r][c];
            }
        }
    }
};