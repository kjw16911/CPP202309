#include <iostream>
using namespace std;
class Dog {
private:
	int* pWeight;
	int* pAge;
public:
	Dog() {
		pAge = new int(1);
		pWeight = new int(10);
	}
	~Dog() {
		delete pAge;
		delete pWeight;
	}
	int GetAge() { return *pAge; }
	void SetAge(int age) { *pAge = age; }
	int GetWeight() { return *pWeight; }
	void SetWeight(int weight) { *pWeight = weight; }
};

int main() {
	Dog* pDog = new Dog;
	cout << "�������� ����: " << pDog->GetAge() << endl; 
	//���� ��ü�� Get,Set �Լ��� �ҷ��� ���� ->�� ���
	pDog->SetAge(5);
	cout << "�������� ����: " << pDog->GetAge() << endl;

	cout << "�������� ����: " << pDog->GetWeight() << endl;
	pDog->SetWeight(50);
	cout << "�������� ����: " << pDog->GetWeight() << endl;
	delete pDog;
	return 0;
}