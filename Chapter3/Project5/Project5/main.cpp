// �����ú͵�������������ȼ�
#include <iostream>
using namespace std;
int main() {
	int arr[] = { 10, 20, 30, 40, 50 };
	int *ptr = arr; // ָ�������ָ�룬ָ���һ��Ԫ��
	cout << "��ʼֵ: " << *ptr++ << endl;  // ���Ϊ10
	return 0;
}
// ptr++ ���Ƚ�ָ�� ptr ��ֵ������ָ����һ��Ԫ�أ����� * ��������õ��ǵ���ǰ�� ptr ֵ��ָ���Ԫ�أ������ǵ������ֵ
