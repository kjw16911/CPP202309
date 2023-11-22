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

void Upgrade(Pizza& pizza) { pizza.SetRadius(20); } //���簡 ��
//������ �Ű������� ����Ͽ� ���� ������ �� ����.
int main() {
	Pizza obj(10);
	Upgrade(obj); //���� 20���� �ٲ�
	obj.Print();
	return 0;
}