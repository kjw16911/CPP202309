#include <iostream>
#include <string>
using namespace std;

class ParentClass {
public:
	void print() {
		cout << "�θ� Ŭ������ print() ��� �Լ�" << endl;
	}
};

class ChildClass :public ParentClass {
	int data;
public:
	void print() { // ��� �Լ� ������
		ParentClass::print(); // �ּ� ó�� ������
	}
	//�θ�Ŭ������ ���� �̸��� �Լ��� ������ �� �ߺ����Ǹ� �ؾ� ��.

	void print(string name) {
		//ParentClass::print();
		cout << "���ڿ� ��� : " << name << endl;
	}
	void print(int data) {
		//ParentClass::print();
		cout << "���� ��� : " << data << endl;
	}
};

int main() {
	ChildClass obj;
	obj.print();
	obj.print("������");
	obj.print(23);
	return 0;
}