#include <iostream>
#include <string>
using namespace std;

class Animal {
public:
	void speak() {
		cout << "동물이 소리를 내고 있음" << endl;
	}
};

class Dog :private Animal { //부모 클래스를 private으로 설정할 수도 있음
							//이럴 경우 부모 클래스의 멤버변수나 함수를 
							//자식 클래스에서만 사용이 가능함.
public: // 부모 클래스에서 상속 받은 speak() 함수를 재정의하는 것임
		// 재정의하지 않는 다면 부모 클래스에서 정의한 speak()함수가 출력됨.
	void speak() {
		cout << "멍멍!" << endl;
	}
};

int main() {
	Dog obj;
	obj.speak();
	return 0;
}