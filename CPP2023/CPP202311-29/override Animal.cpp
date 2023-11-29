#include <iostream>
using namespace std;

class Animal {
public:
	virtual void move() =0 ;
	virtual void eat() = 0;
	virtual void speak() = 0;
	void animal_speak() {
		cout << "������ speak() " << endl;
	}
}; //Animal���� ������ �ʿ䰡 ���� ����� �������� ����
class Lion :public Animal {
public:
	void move() override {
		cout << "������ move() " << endl;
	}
	void eat() override {
		cout << "������ eat() " << endl;
	}
	void speak() override {
		cout << "������ speak() " << endl;
	}
};

int main() {
	Animal* lion = new Lion();
	lion->speak();
	lion->move();
	lion->eat();
	lion->animal_speak();
	delete lion;
	return 0;
}