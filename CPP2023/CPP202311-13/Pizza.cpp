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
//참조자 설정하여 함수의 매개 변수로 전달되게 해야 됨.
//복사가 된 후 값이 조정이 안되기 때문에 pizza 호출 후는 값이 안바뀜.
void MakeDouble(Pizza& p) {
	p.size *= 2;
}

int main() {
	//Pizza pizza(10);
	//MakeDouble(pizza);
	Pizza pizza = CreatePizza();
	cout << pizza.size << "인치 피자" << endl;
	return 0;
}