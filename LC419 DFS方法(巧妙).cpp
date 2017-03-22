

/*
这道题第一思路就是DFS，然而它给了两个要求，一个是不能改变board，第二是只用O(1)的额外空间。
先说下修改board的吧。
找到一个X之后用DFS把周围的全部变成‘.’就可以了。
符合条件的解法是找到X且上边和右边都没有X，很巧妙。
代码如下，注意边界，不然就crash了。
*/



class Solution {

public:
	int countBattleships(vector<vector<char>> &board){
		int num = 0;
		int rows = board.size();
		int cols = board[0].size();
		for(int i = 0; i < rows;i++){
			for(int j = 0 ;j <cols;j++){
				if(board[i][j] == 'X'){
					if(i - 1 < 0||board[i - 1][j]!='X'){
						if(j-1<0||board[i][j-1]!='X'){
							num++;
						}
					}
				}
			}
		}
		return num;
	}


};