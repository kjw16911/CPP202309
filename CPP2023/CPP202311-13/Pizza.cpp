#include <iostream>
using namespace std;

class Pizza {
public:
	Pizza(int s) { size = s; }
	int size;
};

Pizza CreatePizza() {
	Pizza p(10);
	return p;
}
//������ �����Ͽ� �Լ��� �Ű� ������ ���޵ǰ� �ؾ� ��.
//���簡 �� �� ���� ������ �ȵǱ� ������ pizza ȣ�� �Ĵ� ���� �ȹٲ�.
void MakeDouble(Pizza& p) {
	p.size *= 2;
}

int main() {
	//Pizza pizza(10);
	//MakeDouble(pizza);
	Pizza pizza = CreatePizza();
	cout << pizza.size << "��ġ ����" << endl;
	return 0;
}