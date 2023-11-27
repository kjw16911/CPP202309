#include <iostream>
using namespace std;

class Base {
	public:int x;
	protected:int y;
	private:int z;
};

class Derived1 :private Base {
	//x는 자식 클래스에서 사용가능하지만 private으로 지정된다.
	//y는 자식 클래스에서 사용가능하지만 private으로 지정된다.
	//z는 자식 클래스에서도 사용할 수 없다.
};

class Derived2 : public Base {

};

class Derived3 : protected Base {

};
int main() {
	Derived1 obj1;
	Derived2 obj2;
	Derived3 obj3;

	//cout << obj1.x;
	//cout << obj1.y;
	//cout << obj1.z;
	cout << obj2.x;
	//cout << obj2.y;
	//cout << obj2.z;
	//cout << obj3.x;
	//cout << obj3.y;
	//cout << obj3.z;
	return 0;
}