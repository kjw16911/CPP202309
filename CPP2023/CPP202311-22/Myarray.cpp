#include <iostream>
using namespace std;

class MyArray {
public:
	int size;
	int* data; //포인터 변수

	MyArray(int size) {
		this->size = size;
		data = new int[size];//동적 메모리 생성
	}
	~MyArray() {
		if (data != NULL)
			delete[] this->data; //동적 메모리 반환
	}

};
int main() {
	MyArray buffer(10);
	buffer.data[0] = 1;
	{
		MyArray clone = buffer; // buffer가 clone에 복사됨
		//블록이 끝나면서 clone 사용 끝남.
	}
	buffer.data[0] = 2;

	return 0;
}
//에러가 나는 이유는 buffer를 clone에 복사했는데 블록 단위로 생성되고 소멸되는데
//clone이 사라지면서 new int에서 만든 동적배열이 같이 사라지면서 buffer에서 불러올 수 없음