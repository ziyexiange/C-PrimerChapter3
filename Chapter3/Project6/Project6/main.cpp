// ��Ա���������
#include <iostream>
using namespace std;
// ����һ���򵥵���
class MyClass {
public:
	int memberVar = 10;
	void memberFunction() {
		cout << "����һ����Ա����" << endl;
	}
};
int main() {
	// ����һ�� MyClass �Ķ���
	MyClass obj;
	// ʹ�� . ��������ʳ�Ա�����ͳ�Ա����
	cout << "��Ա������ֵ��" << obj.memberVar << endl;
	obj.memberFunction();
	// ʹ�� -> ��������ʳ�Ա�����ͳ�Ա����
	MyClass *ptr = &obj;
	cout << "ͨ��ָ����ʳ�Ա������ֵ��" << ptr->memberVar << endl;
	ptr->memberFunction();
	return 0;
}
