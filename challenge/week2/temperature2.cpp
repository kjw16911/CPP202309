#include <iostream>
using namespace std;

int main() {
	double f_temp; //화씨온도가 들어가는 변수
	double c_temp; //섭씨온도가 들어가는 변수

	cout << "섭씨온도 = ";
	cin >> c_temp;

	//섭씨온도에서 화씨온도로의 변환식 계산
	f_temp = (9.0 / 5.0) * c_temp + 32;

	cout << "화씨온도 = " << f_temp << endl;

	return 0;
}