#include <iostream>
#include <string>
using namespace std;

class Person {
	string name;
protected:
	//private���� �� ��� ���� �߻�
	//address�� ����� �� ���� ����
	//protected�� ����ϴ� ������ �ٸ� ������ ����� �� ������ �ϱ� ����������
	//����� ���� �ڽ� Ŭ���������� ����� �����ϵ��� ����

	string address;
};

class Student :public Person {
public:
	void setAddress(string add) {
		address = add;
	}
	string getAddress() {
		return address;
	}
	//void setName(string name) { this->name = name; } // ����
};

int main() {
	Student obj;
	//obj.setName("����") ;
	obj.setAddress("����� ���α� 1����");
	cout << obj.getAddress() << endl;

	return 0;
}