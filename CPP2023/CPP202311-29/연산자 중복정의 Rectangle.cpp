#include <iostream>
using namespace std;

//Ŭ���� ���ο��� ������ �ߺ�����
//Ŭ���� �ܺο��� ���� ����
class Rectangle {
private:
	int width, height;
public:
	Rectangle(int width = 0, int height = 0) {
		this->width = width;
		this->height = height;
	}

	void Show();

	Rectangle operator - (Rectangle rect) {
		Rectangle c;
		//1. this: a ��ü, rect: b ��ü
		//2. this: b ��ü, rect: a ��ü
		c.width = this->width - rect.width;
		c.height = this->height - rect.height;
		return c;
	}
};

void Rectangle::Show() {
	cout << "width : " << width;
	cout << "," << "height : " << height << endl;
}

int main() {
	Rectangle a(5, 8), b(1, 3), c;
	c = a - b; //a���� b�� ����.
	a.Show();
	b.Show();
	c.Show();
	c = b - a; //b���� a�� ����.
	c.Show();
	return 0;
}