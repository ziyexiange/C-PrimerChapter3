// 左值与右值
#include<iostream>
using namespace std;
int main()
{
	int x = 5;       // x 是左值，因为它有地址
	int y = x;       // x 是右值，因为它只是一个值，并非地址
	int z = x + y;   // x + y 是右值，因为它只是一个临时计算出来的值
	// 左值引用和右值引用也是与这些概念相关的。左值引用指向左值，右值引用指向右值。
	int a = 10;
	int& lref = a;   // lref 是左值引用，指向左值 a
	int&& rref = 5;  // rref 是右值引用，指向右值 5，双重 && 表示 rref 是一个右值引用

	return 0;
}