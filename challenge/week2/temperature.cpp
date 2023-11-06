#include <iostream>
using namespace std;

int main() {
	double f_temp; //화씨온도가 들어가는 변수
	double c_temp; //섭씨온도가 들어가는 변수

	cout << "화씨온도 : ";
	cin >> f_temp;

	//화씨온도에서 섭씨온도로의 변환식 계산
	c_temp = (5.0 / 9.0) * (f_temp - 32);
	
	cout << "섭씨온도 = " << c_temp << endl;

	return 0;
}