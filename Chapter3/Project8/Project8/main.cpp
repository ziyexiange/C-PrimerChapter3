// 移位运算符
#include <iostream>
using namespace std;
int main() {
	int x = 10; // 二进制表示为 1010
	// 左移示例
	int leftShifted = x << 2; // 1010 << 2 -> 101000（二进制），相当于十进制的 40
	cout << "左移结果：" << leftShifted << endl;
	// 右移示例
	int rightShifted = x >> 1; // 1010 >> 1 -> 101（二进制），相当于十进制的 5
	cout << "右移结果：" << rightShifted << endl;
	return 0;
}
