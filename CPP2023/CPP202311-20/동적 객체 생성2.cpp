#include <iostream>
using namespace std;

class Dog {
private:
	string name;
	int age;
public:
	Dog(int age) {
		cout << "생성자 호출\n";
		this->age = age; //생성한 객체의 변수에 접근 ::이 아닌 ->
		name = "바둑이";
		cout << name << "(" << age << ")" << endl;
	}
	~Dog() {
		cout << "소멸자 호출\n";
	}
};

int main() {
	Dog* pDog = new Dog(123); //객체에 대한 포인터 생성
	delete pDog;

	return 0;
}