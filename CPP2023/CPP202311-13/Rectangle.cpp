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
 // �����ڿ� ����Լ��� �������� �տ� �ڷ����� �ٴ��� �Ⱥٴ���
int Rectangle::CalcArea() {
	return width * height;
}

int main() {
	Rectangle r{ 3, 4 };

	cout << "�簢���� ���� : " << r.CalcArea() << '\n';
	return 0;
}