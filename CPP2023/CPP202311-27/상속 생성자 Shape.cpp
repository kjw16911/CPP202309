#include <iostream>
using namespace std;

class Shape {
	int x, y;
public:
	Shape() { cout << "Shape 생성자() " << endl; }
	Shape(int xloc, int yloc) : x{ xloc }, y{ yloc } {
		cout << "Shape 생성자(xloc, yloc)" << endl;
	}
	~Shape() { cout << "Shape 소멸자() " << endl; }
};

class Rectangle :public Shape {
	int width, height;
public:
	//클래스 내부적으로 작성하기 때문에 Rectangle:: 필요없음
	Rectangle(int x, int y, int w, int h):Shape(x, y) { //:Shape()는  생성자를 호출한다는 의미
		width = w;
		height = h;
		cout << "Rectangle 생성자(x, y, w, h) " << endl; }
	~Rectangle() { cout << "Rectangle 소멸자() " << endl; }
};

int main() {
	Rectangle r(0, 0, 100, 100);
	return 0;
}