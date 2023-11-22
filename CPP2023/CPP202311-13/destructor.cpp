#include <string.h>

class MyString {
private:
	int size;
public:
	MyString(int s= 0) {
		size = strlen(c) + 1;
		s = new int[size];
	}
	~MyString() { //프로그램이 종료될 때 소멸자가 호출됨. 즉, MyS
		delete[] s;
	}

};

int main() {
	MyString str();
	return 0;
}