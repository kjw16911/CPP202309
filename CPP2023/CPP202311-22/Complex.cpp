#include <iostream>
using namespace std;

//��ü�� �Լ��� �����ϱ�
class Complex {
public:
	double real, imag;
	Complex(double r = 0.0, double i = 0.0) {
		real = r;
		imag = i;
		cout << "������ ȣ��" << endl;
		Print();
	}
	~Complex() {
		cout << "�Ҹ��� ȣ��" << endl;
		Print();
	}
	void Print() {
		cout << real << "+" << imag << "i" << endl;
	}
};
/*
//���� ������ �ڵ� ȣ��
Complex Add(Complex c1, Complex c2) { 
	//��ȯ���� class�� �ִ� �����̱� ������ �Լ� �ڷ����� class�� �ۼ�
	Complex temp;
	temp.real = c1.real + c2.real;
	temp.imag = c1.imag + c2.imag;
	return temp;
}
*/

/*
// ������ �Ű����� �̿�
Complex Add(Complex & c1, Complex & c2) {
	Complex temp;
	temp.real = c1.real + c2.real;
	temp.imag = c1.imag + c2.imag;
	return temp;
}
*/

// const Ű���� ���
// ������ �Ű������� ����߱� ������ c1�� c2�� ���� ����� ������ const�� ����Ͽ� ����
Complex Add(const Complex& c1, const Complex& c2) {
	Complex temp;
	temp.real = c1.real + c2.real;
	temp.imag = c1.imag + c2.imag;
	return temp;
}

int main() {
	Complex c1{ 1, 2 }, c2{ 3, 4 };
	Complex t;
	t = Add(c1, c2);
	t.Print();
	return 0;
}