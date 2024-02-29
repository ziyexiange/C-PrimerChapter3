// ���������
#include <iostream>
class Complex {
private:
	double real;
	double imag;
public:
	Complex(double r = 0.0, double i = 0.0) : real(r), imag(i) {}
	// ���� + �����
	Complex operator+(const Complex& obj) const {
		Complex temp;
		temp.real = real + obj.real;
		temp.imag = imag + obj.imag;
		return temp;
	}
	void display() const {
		std::cout << "Real: " << real << " Imaginary: " << imag << std::endl;
	}
};
int main() {
	Complex c1(2.0, 3.0);
	Complex c2(1.0, 4.0);
	Complex result = c1 + c2; // ʹ�����ص� + �����
	result.display();
	return 0;
}
