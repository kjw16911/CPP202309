#include <iostream>
#include <string>
using namespace std;

class Person {
	string name;
protected:
	//private으로 할 경우 오류 발생
	//address를 사용할 수 없기 때문
	//protected를 사용하는 이유도 다른 곳에서 사용할 수 없도록 하기 위함이지만
	//상속을 통한 자식 클래스에서는 사용이 가능하도록 해줌

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
	//void setName(string name) { this->name = name; } // 에러
};

int main() {
	Student obj;
	//obj.setName("지웅") ;
	obj.setAddress("서울시 종로구 1번지");
	cout << obj.getAddress() << endl;

	return 0;
}