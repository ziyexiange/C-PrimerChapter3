// ��λ�����
#include <iostream>
using namespace std;
int main() {
	int x = 10; // �����Ʊ�ʾΪ 1010
	// ����ʾ��
	int leftShifted = x << 2; // 1010 << 2 -> 101000�������ƣ����൱��ʮ���Ƶ� 40
	cout << "���ƽ����" << leftShifted << endl;
	// ����ʾ��
	int rightShifted = x >> 1; // 1010 >> 1 -> 101�������ƣ����൱��ʮ���Ƶ� 5
	cout << "���ƽ����" << rightShifted << endl;
	return 0;
}
