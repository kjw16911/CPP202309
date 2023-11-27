#include <iostream>
#include <string>
using namespace std;
class Shape {
	int x, y;
public:
	void setX(int xval) {
		x = xval;
	}
	void setY(int yval) {
		y = yval;
	}
};

class Rectangle:public Shape {
	int width, height;
public:
	void setWidth(int w) {
		width = w;
	}
	void setHeight(int h) {
		height = h;
	}
	int getArea() {
		return(width * height);
	}
};

int main() {
	Rectangle r;
	// 딱히 부모 클래스의 멤버변수나 함수를 사용하지 않음
	// 부모 클래스와 자식클래스의 상관관계를 잘 파악하고 사용해야 됨.

	r.setWidth(5);
	r.setHeight(6);

	cout << "사각형의 면적 : " << r.getArea() << endl;

	return 0;
}