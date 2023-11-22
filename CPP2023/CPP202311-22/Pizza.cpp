#include <iostream>
using namespace std;

class Pizza {
	int radius;
public:
	Pizza(int r = 0):radius{r}{ }// 생성자 안에서 멤버변수 초기화 방법
	/* 위의 표현과 같음
	Pizza(int r = 0) {
		radius = r;
	}
	*/
	
	~Pizza(){  }
	void SetRadius(int r) { radius = r; }
	void Print() { cout << "Pizza(" << radius << ")" << endl; }
};

void Upgrade(Pizza p) { p.SetRadius(20); } //복사가 됨

int main() {
	Pizza obj(10);
	Upgrade(obj); //값이 20으로 바뀌지 않음
	//복사본에 20으로 설정한거기 때문에 원본은 10으로 설정되어있음.
	obj.Print();
	return 0;
}