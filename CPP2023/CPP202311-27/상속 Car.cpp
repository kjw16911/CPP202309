#include <iostream>
#include <string>
using namespace std;

class Car {
	int speed; //속도
public:
	void setSpeed(int s) { speed = s; }
	int getSpeed() { return speed; }
};

//Car 클래스를 상속 받아 Car 클래스에 있는 멤버변수와 멤버함수를 사용할 수 있게함.
class SportsCar :public Car {
	bool turbo;

public:
	void setTurbo(bool newValue) { turbo = newValue; }
	bool getTurbo() { return turbo; }
};

int main() {
	SportsCar c;
	c.setSpeed(60); //부모 클래스 함수 호출
	c.setTurbo(true); //자식 클래스 함수 호출
	cout << c.getSpeed() << endl;
	cout << c.getTurbo() << endl;
	c.setSpeed(100);
	c.setTurbo(false);
	cout << c.getSpeed() << endl;
	cout << c.getTurbo() << endl;

	return 0;
}