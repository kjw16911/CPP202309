#include <iostream>
#include <string>
using namespace std;

class Animal {
public:
	void speak() {
		cout << "������ �Ҹ��� ���� ����" << endl;
	}
};

class Dog :private Animal { //�θ� Ŭ������ private���� ������ ���� ����
							//�̷� ��� �θ� Ŭ������ ��������� �Լ��� 
							//�ڽ� Ŭ���������� ����� ������.
public: // �θ� Ŭ�������� ��� ���� speak() �Լ��� �������ϴ� ����
		// ���������� �ʴ� �ٸ� �θ� Ŭ�������� ������ speak()�Լ��� ��µ�.
	void speak() {
		cout << "�۸�!" << endl;
	}
};

int main() {
	Dog obj;
	obj.speak();
	return 0;
}