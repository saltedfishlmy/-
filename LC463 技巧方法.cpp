/*要点：1.char型可以直接转换成string 在最后直接加s[i]就可以
		2.string可以用下标来控制。

*/

class Solution {
public:
		int islandPerimeter(vector<vector<int>>& grid) {
			if(grid.size()==0) return 0;//如果大小为零，则返回零
			int cnt = 0;repeat = 0;//将陆地和重复数初始化为零
			for(int i = 0; i < grid.size(); i++) {
				for(int j = 0; j < grid[0].size();j++) {//双重循环，从左向右，从上向下遍历
					if(!grid[i][j]) continue;//如果为零，continue
					cnt++;//如果不为零，将陆地加一
					if(i!=0 && grid[i-1][j]) repeat++;//判断有没有到边界，然后如果左边，上边有就加一
					if(j!=0 && grid[i][j-1]) repeat++;
				}
			}
return cnt*4 - repeat*2;
		}
};