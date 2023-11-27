#include <iostream>
#include <string>
using namespace std;

class ParentClass {
public:
	void print() {
		cout << "부모 클래스의 print() 멤버 함수" << endl;
	}
};

class ChildClass :public ParentClass {
	int data;
public:
	void print() { // 멤버 함수 재정의
		ParentClass::print(); // 주석 처리 빼보기
	}
	//부모클래스의 같은 이름의 함수를 재정의 후 중복정의를 해야 됨.

	void print(string name) {
		//ParentClass::print();
		cout << "문자열 출력 : " << name << endl;
	}
	void print(int data) {
		//ParentClass::print();
		cout << "숫자 출력 : " << data << endl;
	}
};

int main() {
	ChildClass obj;
	obj.print();
	obj.print("김지웅");
	obj.print(23);
	return 0;
}