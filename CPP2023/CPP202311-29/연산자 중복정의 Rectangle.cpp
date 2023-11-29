#include <iostream>
using namespace std;

//클래스 내부에서 연산자 중복정의
//클래스 외부에서 정의 가능
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
		//1. this: a 객체, rect: b 객체
		//2. this: b 객체, rect: a 객체
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
	c = a - b; //a에서 b를 뺀다.
	a.Show();
	b.Show();
	c.Show();
	c = b - a; //b에서 a를 뺀다.
	c.Show();
	return 0;
}