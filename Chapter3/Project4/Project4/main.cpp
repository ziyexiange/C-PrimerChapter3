// ��ʾת��
#include<iostream>
using namespace std;
int main()
{
	int a = 10;
	double b = (double)a;              // C ����ǿ������ת������ int ת��Ϊ double
	int c = 20;
	double d = static_cast<double>(b); // static_cast���� int ת��Ϊ double
	const int* ptr = new int(5);       // ָ����������ָ��
	int* nonConstPtr = const_cast<int*>(ptr); // �Ƴ�������
	*nonConstPtr = 10;  // �޸�ֵ
	cout << *ptr;       // ԭָ��ָ���ֵҲ�����˱仯

	return 0;
}