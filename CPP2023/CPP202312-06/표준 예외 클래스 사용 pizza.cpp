#include <iostream>
#include <exception> //꼭 작성해야 함수 사용 가능
using namespace std;

int main() {
	int pizza_slices = 0;
	int persons = 0;
	int slices_per_person = 0;

	try {
		cout << "피자 조각수를 입력하시오: ";
		cin >> pizza_slices;
		if(pizza_slices == 0)
			throw invalid_argument("0으로 나눌 수 없습니다."); 
			//throw를 여러개 받아서 사용할수 있음
		cout << "사람수를 입력하시오: ";
		cin >> persons;
		if (persons == 0)
			throw persons;
		slices_per_person = pizza_slices / persons;
		cout << "한 사람당 피자는 " << slices_per_person << "조각입니다." << endl;
	}
	catch (exception& e) {
		cout << "에러: " << e.what() << endl; //에러 발생 시 추가 출력
	}
	catch (...) {
		cout << "에러" << endl;
	}
	return 0;
}