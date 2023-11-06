#include <iostream>
using namespace std;

int main() {
	double kilogram;
	double pound;

	cout << "파운드 무게를 입력하세요 : ";
	cin >> pound;
	
	kilogram = pound / 2.2046;

	cout << "변환된 pound는 " << kilogram << "kg 입니다.";

	return 0;
}