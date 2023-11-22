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

void Upgrade(Pizza* p) { p->SetRadius(20); } //복사가 됨

int main() {
	Pizza obj(10);
	Upgrade(&obj); //값이 20으로 바뀜
	//포인터를 사용하여 참조자 매개변수를 사용했기 때문에 원본을 수정하는 것과 같음
	obj.Print();
	return 0;
}