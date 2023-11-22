#include <iostream>
using namespace std;

class MyArray {
public:
	int size;
	int* data; //포인터 변수

	MyArray(int size);
	MyArray(const MyArray& other);
	~MyArray();
};

MyArray::MyArray(int size) {
	this->size = size;
	data = new int[size];//동적 메모리 생성
}

MyArray::MyArray(const MyArray& other) {
	this->size = other.size;
	this->data = new int[other.size];
	for (int i = 0; i < size; i++)
		this->data[i] = other.data[i];
}

MyArray::~MyArray() {
	if (data != NULL)
		delete[] this->data; //동적 메모리 반환
	data = nullptr;
}

int main() {
	MyArray buffer(10);
	buffer.data[0] = 1;
	{
		MyArray clone = buffer; // buffer가 clone에 복사됨
		//블록이 끝나면서 clone 사용했던 data만 사라지기 때문에 오류가 발생하지 않음.
	}
	buffer.data[0] = 2;

	return 0;
}