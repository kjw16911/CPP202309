#include <iostream>
using namespace std;

//���� �����ڰ� �ʿ� ���� ���
class Person {
public:
	int age;
	Person(int a) { age = a; }
};

int main() {
	Person kim(21);
	Person clone{ kim }; //kim ��ü ������ �ʱ�ȭ(����)�� clone ��ü ����
						//-> �⺻������ ���� ������ ȣ��

	cout << "kim�� ����: " << kim.age << " clone�� ����: " << clone.age << endl;
	kim.age = 23;
	cout << "kim�� ����: " << kim.age << " clone�� ����: " << clone.age << endl;
	return 0;
	//clone�� ���̴� ����� ���̱� ������ �����ص� �ٲ��� ����.
}