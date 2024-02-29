// 显示转换
#include<iostream>
using namespace std;
int main()
{
	int a = 10;
	double b = (double)a;              // C 风格的强制类型转换，将 int 转换为 double
	int c = 20;
	double d = static_cast<double>(b); // static_cast，将 int 转换为 double
	const int* ptr = new int(5);       // 指向常量整数的指针
	int* nonConstPtr = const_cast<int*>(ptr); // 移除常量性
	*nonConstPtr = 10;  // 修改值
	cout << *ptr;       // 原指针指向的值也发生了变化

	return 0;
}