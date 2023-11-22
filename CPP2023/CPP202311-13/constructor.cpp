#include <iostream>
using namespace std;

class Time {
public:
	int hour;
	int minute;


	//������ ȣ�� �� �ʱ�ȭ
	//�����ڸ� �ʱ�ȭ�� �� ()�ȿ��� �ʱ�ȭ �� ���� �ְ�, {}�ȿ��� �ʱ�ȭ�� ���� ����
	Time() {
		hour = 0;
		minute = 0;
	}
	Time(int h, int m) {
		if (h > 23 || h < 0) {
			cout << "�ð��� 23 �ʰ�, 0 �̸��Դϴ�.";
			cout << "�ð��� 0���� �ʱ�ȭ�մϴ�." << endl;
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