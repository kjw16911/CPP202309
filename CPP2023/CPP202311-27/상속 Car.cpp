#include <iostream>
#include <string>
using namespace std;

class Car {
	int speed; //�ӵ�
public:
	void setSpeed(int s) { speed = s; }
	int getSpeed() { return speed; }
};

//Car Ŭ������ ��� �޾� Car Ŭ������ �ִ� ��������� ����Լ��� ����� �� �ְ���.
class SportsCar :public Car {
	bool turbo;

public:
	void setTurbo(bool newValue) { turbo = newValue; }
	bool getTurbo() { return turbo; }
};

int main() {
	SportsCar c;
	c.setSpeed(60); //�θ� Ŭ���� �Լ� ȣ��
	c.setTurbo(true); //�ڽ� Ŭ���� �Լ� ȣ��
	cout << c.getSpeed() << endl;
	cout << c.getTurbo() << endl;
	c.setSpeed(100);
	c.setTurbo(false);
	cout << c.getSpeed() << endl;
	cout << c.getTurbo() << endl;

	return 0;
}