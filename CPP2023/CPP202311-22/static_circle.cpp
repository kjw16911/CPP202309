#include <iostream>
using namespace std;

class Circle {
	int x, y;
	int radius;
public:
	static int count;
	Circle(int x = 0, int y = 0, int radius = 0) {
		this->x = x; 
		this->y = y;
		this->radius = radius;
		count++;

	}
};
int Circle::count = 0; // 정적변수 초기화 // 클래스 밖(외부)에서 해야 됨.
//정적변수는 클래스 내부에서만이 아닌 메인에서도 활용가능

int main() {
	Circle c1;
	cout << "지금까지 생성된 원의 개수 = " << Circle::count << endl;
	cout << "지금까지 생성된 원의 개수 = " << c1.count << endl;

	Circle c2(100, 100, 30);
	cout << "지금까지 생성된 원의 개수 = " << Circle::count << endl;
	cout << "지금까지 생성된 원의 개수 = " << c2.count << endl;

}