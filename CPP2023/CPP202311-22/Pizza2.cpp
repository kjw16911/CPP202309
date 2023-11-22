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

void Upgrade(Pizza* p) { p->SetRadius(20); } //���簡 ��

int main() {
	Pizza obj(10);
	Upgrade(&obj); //���� 20���� �ٲ�
	//�����͸� ����Ͽ� ������ �Ű������� ����߱� ������ ������ �����ϴ� �Ͱ� ����
	obj.Print();
	return 0;
}