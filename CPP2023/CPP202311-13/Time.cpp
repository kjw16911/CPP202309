#include <iostream>
using namespace std;

class Time {
private:
	int hour; //0-23
	int minute; //0-59
public:
	Time(int h, int m);
	void IncHour();
	void Print();

	int GetHour() { return hour; }
	int GetMinute() { return minute; }
	void SetHour(int h) { hour = h; }
	void SetMinute(int m) { minute = m; }
};

Time::Time(int h, int m) {
	if (h > 23 || h < 0) {
		cout << "시간 범위 오류" << endl;
		h = 0;
	}
	hour = h;
	minute = m;
}

void Time::IncHour() {
	++hour;
	if (hour > 23) {
		hour = 0;
	}
}
void Time::Print() {
	cout << hour << ":" << minute << endl;
}

int main()
{
	Time a{ 0, 0 };
	a.SetHour(6);
	a.SetMinute(30);

	a.Print();

	cout << a.GetHour() << ":" << a.GetMinute() << endl;

	int my_hour = a.GetHour();
	cout << "my_hour : " << my_hour << endl;
	my_hour += 10;
	cout << "my_hour : " << my_hour << endl;
	cout << "a.GetHour() : " << a.GetHour() << endl;
	a.SetHour(my_hour);
	cout << "Set후 a.GetHour() : " << a.GetHour() << endl;
	return 0;
}