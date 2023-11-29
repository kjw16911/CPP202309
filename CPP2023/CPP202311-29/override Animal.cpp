#include <iostream>
using namespace std;

class Animal {
public:
	virtual void move() =0 ;
	virtual void eat() = 0;
	virtual void speak() = 0;
	void animal_speak() {
		cout << "동물의 speak() " << endl;
	}
}; //Animal에서 구현할 필요가 없는 얘들을 가상으로 선언
class Lion :public Animal {
public:
	void move() override {
		cout << "사자의 move() " << endl;
	}
	void eat() override {
		cout << "사자의 eat() " << endl;
	}
	void speak() override {
		cout << "사자의 speak() " << endl;
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