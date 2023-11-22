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
	cout << "강아지의 나이: " << pDog->GetAge() << endl; 
	//동적 객체의 Get,Set 함수를 불러올 때는 ->를 사용
	pDog->SetAge(5);
	cout << "강아지의 나이: " << pDog->GetAge() << endl;

	cout << "강아지의 무게: " << pDog->GetWeight() << endl;
	pDog->SetWeight(50);
	cout << "강아지의 무게: " << pDog->GetWeight() << endl;
	delete pDog;
	return 0;
}