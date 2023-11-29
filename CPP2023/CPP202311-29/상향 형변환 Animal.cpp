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
	void speak() { cout << "�۸�!" << endl; }
};

class Cat : public Animal {
public:
	void speak() { cout << "�߿�!" << endl; }
};

/*
int main() {
	//new�� ���� ���� ��ü�� ���������Ƿ� �����ͷ� ����
	Animal* a1 = new Dog(); //Dog�� ��޵Ǵ� ���� �ƴ� Animal ��ü�� ��޵�
	a1->speak();

	Animal a2 = Cat(); //Cat���� ��޵Ǵ� ���� �ƴ� Animal ��ü�� ��޵�
	//a2->speak(); //����
	a2.speak();

	//a1->age = 10; //����
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

	//����
	//vector<Dog*> animals2;
	//animals2.push_back(new Dog());
	//animals2.push_back(new Cat());

	return 0;
}