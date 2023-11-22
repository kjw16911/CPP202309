#include <iostream>
using namespace std;

class Pizza {
	int radius;
public:
	Pizza(int r = 0) :radius{ r } { }// 생성자 안에서 멤버변수 초기화 방법
	/* 위의 표현과 같음
	Pizza(int r = 0) {
		radius = r;
	}
	*/

	~Pizza() {  }
	void SetRadius(int r) { radius = r; }
	void Print() { cout << "Pizza(" << radius << ")" << endl; }
};

void Upgrade(Pizza& pizza) { pizza.SetRadius(20); } //복사가 됨
//참조자 매개변수를 사용하여 값을 변경할 수 있음.
int main() {
	Pizza obj(10);
	Upgrade(obj); //값이 20으로 바뀜
	obj.Print();
	return 0;
}