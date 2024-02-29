// 解引用和递增运算符的优先级
#include <iostream>
using namespace std;
int main() {
	int arr[] = { 10, 20, 30, 40, 50 };
	int *ptr = arr; // 指向数组的指针，指向第一个元素
	cout << "初始值: " << *ptr++ << endl;  // 结果为10
	return 0;
}
// ptr++ 会先将指针 ptr 的值递增（指向下一个元素），但 * 运算符作用的是递增前的 ptr 值所指向的元素，而不是递增后的值
