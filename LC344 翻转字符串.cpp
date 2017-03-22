/*要点：1.char型可以直接转换成string 在最后直接加s[i]就可以
		2.string可以用下标来控制。

*/

class Solution {
public:
    string reverseString(string s) {
        string n;
        int j = 0;
        for(int i = s.size()-1;i >= 0; i--){
            n = n+s[i];
            j++;
        }
        return n;
    }
};