


/*
c++11里新加入的to_string函数！！

记录一下用到过的int转换成string的两种方法

第一种是to_string函数，这是C++11新增的，使用非常方便，简单查了下：C++11标准增加了全局函数std::to_string，以及std::stoi/stol/stoll等等函数（这几个就是string转int，long，以及long long啦~）
to_string这个函数还是很强大的！
string to_string (int val);
string to_string (long val);
string to_string (long long val);
string to_string (unsigned val);
string to_string (unsigned long val);
string to_string (unsigned long long val);
string to_string (float val);
string to_string (double val);
string to_string (long double val)
不仅int可以转换成string，这些都可以哦~

第二种是借助字符串流：
标准库定义了三种类型字符串流：istringstream,ostringstream,stringstream
看名字就知道这几种类型和iostream中的几个非常类似，分别可以读、写以及读和写string类型，它们也确实是从iostream类型派生而来的。
要使用它们需要包含sstream头文件。

除了从iostream继承来的操作
1.sstream类型定义了一个有string形参的构造函数，
即：  stringstream stream(s); 创建了存储s副本的stringstream对象,s为string类型对象
2.定义了名为str的成员，用来读取或设置stringstream对象所操纵的string值：
stream.str(); 返回stream中存储的string类型对象
stream.str(s); 将string类型的s复制给stream，返回void

于是……
string Int_to_String(int n)
{
ostringstream stream;
stream<<n;  //n为int类型
return stream.str();
}


*/class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string> res;
        for(int i = 1; i <= n; i++){
            if(i%3==0&&i%5!=0){
                res.push_back("Fizz");
            }else if(i%3!=0&&i%5==0){
                res.push_back("Buzz");
            }else if(i%3==0&&i%5==0){
                res.push_back("FizzBuzz");
            }else{
                res.push_back(to_string(i));
            }
        }
     return res;   
    }
};