#include <iostream>
using namespace std;
class Pizza {
	int radius;
public:
	Pizza(int r = 0) :radius{ r } { }// ������ �ȿ��� ������� �ʱ�ȭ ���
	/* ���� ǥ���� ����
	Pizza(int r = 0) {
		radius = r;
	}
	*/

	~Pizza() {  }
	void SetRadius(int r) { radius = r; }
	void Print() { cout << "Pizza(" << radius << ")" << endl; }
};

Pizza CreatePizza() {
	Pizza p(10);
	return p;
}

int main() {
	Pizza obj;
	obj = CreatePizza();

	obj.Print();
	return 0;
}