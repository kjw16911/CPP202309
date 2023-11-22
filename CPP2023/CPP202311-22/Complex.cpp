#include <iostream>
using namespace std;

//객체를 함수로 전달하기
class Complex {
public:
	double real, imag;
	Complex(double r = 0.0, double i = 0.0) {
		real = r;
		imag = i;
		cout << "생성자 호출" << endl;
		Print();
	}
	~Complex() {
		cout << "소멸자 호출" << endl;
		Print();
	}
	void Print() {
		cout << real << "+" << imag << "i" << endl;
	}
};
/*
//복사 생성자 자동 호출
Complex Add(Complex c1, Complex c2) { 
	//반환값이 class에 있는 변수이기 때문에 함수 자료형에 class를 작성
	Complex temp;
	temp.real = c1.real + c2.real;
	temp.imag = c1.imag + c2.imag;
	return temp;
}
*/

/*
// 참조자 매개변수 이용
Complex Add(Complex & c1, Complex & c2) {
	Complex temp;
	temp.real = c1.real + c2.real;
	temp.imag = c1.imag + c2.imag;
	return temp;
}
*/

// const 키워드 사용
// 참조자 매개변수를 사용했기 때문에 c1과 c2가 값이 변경될 여지를 const를 사용하여 방지
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