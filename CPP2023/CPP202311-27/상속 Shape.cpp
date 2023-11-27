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
	// ���� �θ� Ŭ������ ��������� �Լ��� ������� ����
	// �θ� Ŭ������ �ڽ�Ŭ������ ������踦 �� �ľ��ϰ� ����ؾ� ��.

	r.setWidth(5);
	r.setHeight(6);

	cout << "�簢���� ���� : " << r.getArea() << endl;

	return 0;
}