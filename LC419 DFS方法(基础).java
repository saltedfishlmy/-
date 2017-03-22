public class Solution {
     
    private int[] di = { -1, 0, 1, 0 }, dj = { 0, -1, 0, 1 };
     
    public int countBattleships(char[][] board) {
        int res = 0, height = board.length, width = board[0].length, i, j, m, n;
        boolean[][] visited = new boolean[height][width];
        for (i = 0; i < height; i++)
            for (j = 0; j < width; j++)
                visited[i][j] = false;
        for (i = 0; i < height; i++)
            for (j = 0; j < width; j++) {
                if (board[i][j] == 'X' && visited[i][j] == false) {
                    res++;
                    DFS(board, visited, i, j, height, width);
                }
            }
        return res;
    }
     
    public void DFS(char[][] board, boolean[][] visited, int i, int j,
            int h, int w) {
        int ii, jj, k;
        visited[i][j] = true;
        for (k = 0; k < 4; k++) {
            ii = i + di[k];
            jj = j + dj[k];
            if (ii >= 0 && ii < h && jj >= 0 && jj < w && board[ii][jj] == 'X'
                    && visited[ii][jj] == false)
                DFS(board,visited,ii,jj,h,w);
        }
    }
}