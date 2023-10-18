#include <iostream>
using namespace std;

float Average(int value1, int value2 = 0) {
	float n = 2;
	float result = (value1 + value2) / n; 
	// 계산식이 전부 int 타입이면 result 를 float로 선언해도
	// int 타입으로 값을 반환함.
	// 따라서 2.0과 같이 float타입으로 작성하던지
	// 아님 ((float)value1 + value2) / 2 와 같이 작성하면됨.
	return result;
}

int main() {
	int a = 2, b = 3;
	float value1= Average(a, b);
	cout << value1 << endl;

	float value2 = Average(a);
	cout << value2 << endl;

	return 0;
}