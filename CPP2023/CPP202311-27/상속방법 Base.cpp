#include <iostream>
using namespace std;

class Base {
	public:int x;
	protected:int y;
	private:int z;
};

class Derived1 :private Base {
	//x�� �ڽ� Ŭ�������� ��밡�������� private���� �����ȴ�.
	//y�� �ڽ� Ŭ�������� ��밡�������� private���� �����ȴ�.
	//z�� �ڽ� Ŭ���������� ����� �� ����.
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