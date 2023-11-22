#include <iostream>
using namespace std;

class Circle {
private:
	int radius;

public:
	Circle() { radius = 10; }
	~Circle() {};
	void SetRadius(int radius) { this->radius = radius; }
	int GetRadius() const { return radius; }
};

int main() {
	Circle* p = new Circle();
	const Circle* pConstObj = new Circle(); //const를 통해 객체 자체를 상수로 바꿔 고정시킴
	Circle* const pConstPtr = new Circle(); //포인터 자체를 const한거임 값이 변경 가능

	cout << "pRect->radius: " << p->GetRadius() << endl;
	cout << "pConstObj->radius: " << pConstObj->GetRadius() << endl;
	cout << "pConstPtr->radius: " << pConstPtr->GetRadius() << endl;

	p->SetRadius(30);
	//pConstObj->SetRadius(30); //객체 자체가 상수로 고정되어 변경 불가능
	pConstPtr->SetRadius(30);

	cout << "pRect->radius: " << p->GetRadius() << endl;
	cout << "pConstObj->radius: " << pConstObj->GetRadius() << endl;
	cout << "pConstPtr->radius: " << pConstPtr->GetRadius() << endl;

	return 0;
}