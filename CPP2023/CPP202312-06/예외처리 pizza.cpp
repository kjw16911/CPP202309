#include <iostream>
using namespace std;

int dividePizza(int pizza_slices, int persons);

int main() {
	int pizza_slices = 0;
	int persons = -1;
	int slices_per_person = 0;

	try {
		cout << "피자 조각수를 입력하시오 :";
		cin >> pizza_slices;
		cout << "사람수를 입력하시오 : ";
		cin >> persons;
		//throw persons; //persons가 catch의 int e로 던져짐
		slices_per_person = dividePizza(pizza_slices, persons);
		cout << "한사람당 피자는 " << slices_per_person << "조각입니다." << endl;
	}
	//타입이 일치되는 예외만 처리
	catch (int e) { //int 형의 오류만 받아 처리함
		cout << "사람이 " << e << "명입니다." << endl;
	}
	return 0;
}

int dividePizza(int pizza_slices, int persons) { //함수에서 오류가 발생해도 throw할 수 있음 
	if (persons == 0) 
		throw persons;
	return pizza_slices / persons;
}