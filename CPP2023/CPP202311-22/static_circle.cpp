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
int Circle::count = 0; // �������� �ʱ�ȭ // Ŭ���� ��(�ܺ�)���� �ؾ� ��.
//���������� Ŭ���� ���ο������� �ƴ� ���ο����� Ȱ�밡��

int main() {
	Circle c1;
	cout << "���ݱ��� ������ ���� ���� = " << Circle::count << endl;
	cout << "���ݱ��� ������ ���� ���� = " << c1.count << endl;

	Circle c2(100, 100, 30);
	cout << "���ݱ��� ������ ���� ���� = " << Circle::count << endl;
	cout << "���ݱ��� ������ ���� ���� = " << c2.count << endl;

}