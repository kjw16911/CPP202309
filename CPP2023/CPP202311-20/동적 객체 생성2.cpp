#include <iostream>
using namespace std;

class Dog {
private:
	string name;
	int age;
public:
	Dog(int age) {
		cout << "������ ȣ��\n";
		this->age = age; //������ ��ü�� ������ ���� ::�� �ƴ� ->
		name = "�ٵ���";
		cout << name << "(" << age << ")" << endl;
	}
	~Dog() {
		cout << "�Ҹ��� ȣ��\n";
	}
};

int main() {
	Dog* pDog = new Dog(123); //��ü�� ���� ������ ����
	delete pDog;

	return 0;
}