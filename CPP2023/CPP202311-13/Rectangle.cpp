#include <iostream>
using namespace std;

class Rectangle {
	int width, height;
public:
	Rectangle(int w, int h);
	int CalcArea();
};

Rectangle::Rectangle(int w, int h) {
	width = w;
	height = h;
}
 // 생성자와 멤버함수의 차이점은 앞에 자료형이 붙는지 안붙는지
int Rectangle::CalcArea() {
	return width * height;
}

int main() {
	Rectangle r{ 3, 4 };

	cout << "사각형의 넓이 : " << r.CalcArea() << '\n';
	return 0;
}