#include <string.h>

class MyString {
private:
	int size;
public:
	MyString(int s= 0) {
		size = strlen(c) + 1;
		s = new int[size];
	}
	~MyString() { //���α׷��� ����� �� �Ҹ��ڰ� ȣ���. ��, MyS
		delete[] s;
	}

};

int main() {
	MyString str();
	return 0;
}