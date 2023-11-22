#include <iostream>
using namespace std;

//복사 생성자가 필요 없는 경우
class Person {
public:
	int age;
	Person(int a) { age = a; }
};

int main() {
	Person kim(21);
	Person clone{ kim }; //kim 객체 정보로 초기화(복사)된 clone 객체 생성
						//-> 기본적으로 복사 생성자 호출

	cout << "kim의 나이: " << kim.age << " clone의 나이: " << clone.age << endl;
	kim.age = 23;
	cout << "kim의 나이: " << kim.age << " clone의 나이: " << clone.age << endl;
	return 0;
	//clone의 나이는 복사된 것이기 때문에 변경해도 바뀌지 않음.
}