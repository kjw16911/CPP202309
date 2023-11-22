#include <iostream>
using namespace std;

class Time {
public:
	int hour;
	int minute;


	//생성자 호출 및 초기화
	//생성자를 초기화할 때 ()안에서 초기화 할 수도 있고, {}안에서 초기화할 수도 있음
	Time() {
		hour = 0;
		minute = 0;
	}
	Time(int h, int m) {
		if (h > 23 || h < 0) {
			cout << "시간이 23 초과, 0 미만입니다.";
			cout << "시간을 0으로 초기화합니다." << endl;
			h = 0;
		}
		hour = h;
		minute = m;
	}
	/*
	Time(int h = 0, int m = 0) {
		hour = h;
		minute = m;
	}
	*/
	
	void Print() {
		cout << hour << ":" << minute << endl;
	}
};

int main() {
	Time a;
	Time b{ 10, 25 };
	Time c(100, 25);


	a.Print();
	b.Print();
	c.Print();
	return 0;
}