// 成员访问运算符
#include <iostream>
using namespace std;
// 定义一个简单的类
class MyClass {
public:
	int memberVar = 10;
	void memberFunction() {
		cout << "这是一个成员函数" << endl;
	}
};
int main() {
	// 创建一个 MyClass 的对象
	MyClass obj;
	// 使用 . 运算符访问成员变量和成员函数
	cout << "成员变量的值：" << obj.memberVar << endl;
	obj.memberFunction();
	// 使用 -> 运算符访问成员变量和成员函数
	MyClass *ptr = &obj;
	cout << "通过指针访问成员变量的值：" << ptr->memberVar << endl;
	ptr->memberFunction();
	return 0;
}
