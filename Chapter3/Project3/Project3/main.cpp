// 隐式转换
#include<iostream>
using namespace std;
int main()
{
	short a = 5;
	int b = a;              // 整型提升，将 short 提升为 int
	double y = 2.5;
	double result = b + y; // 算术转换，将 int 转换为 double

	return 0;
}