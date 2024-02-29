// 成员运算符
#include <iostream>
#include<string>
using namespace std;
int main() {
	int num = 10;
	string result;
	// 使用条件运算符将结果赋给字符串
	result = (num > 5) ? "大于5" : "小于等于5";
	// 输出结果
	cout << "结果是：" << result << endl;
	return 0;
}
