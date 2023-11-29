#include <iostream>
#include <vector>
using namespace std;

class Animal {
public:
	void speak() { cout << "Animal speak()" << endl; }
};

class Dog :public Animal {
public:
	int age;
	void speak() { cout << "멍멍!" << endl; }
};

class Cat : public Animal {
public:
	void speak() { cout << "야옹!" << endl; }
};

/*
int main() {
	//new를 통해 동적 객체를 생성했으므로 포인터로 받음
	Animal* a1 = new Dog(); //Dog로 취급되는 것이 아닌 Animal 객체로 취급됨
	a1->speak();

	Animal a2 = Cat(); //Cat으로 취급되는 것이 아닌 Animal 객체로 취급됨
	//a2->speak(); //오류
	a2.speak();

	//a1->age = 10; //오류
	delete a1;
	return 0;
}
*/

int main() {
	vector<Animal*> animals;
	animals.push_back(new Dog());
	animals.push_back(new Cat());

	for (const auto& animal : animals) {
		animal->speak();
	}

	//에러
	//vector<Dog*> animals2;
	//animals2.push_back(new Dog());
	//animals2.push_back(new Cat());

	return 0;
}