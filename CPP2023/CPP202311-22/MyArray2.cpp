#include <iostream>
using namespace std;

class MyArray {
public:
	int size;
	int* data; //������ ����

	MyArray(int size);
	MyArray(const MyArray& other);
	~MyArray();
};

MyArray::MyArray(int size) {
	this->size = size;
	data = new int[size];//���� �޸� ����
}

MyArray::MyArray(const MyArray& other) {
	this->size = other.size;
	this->data = new int[other.size];
	for (int i = 0; i < size; i++)
		this->data[i] = other.data[i];
}

MyArray::~MyArray() {
	if (data != NULL)
		delete[] this->data; //���� �޸� ��ȯ
	data = nullptr;
}

int main() {
	MyArray buffer(10);
	buffer.data[0] = 1;
	{
		MyArray clone = buffer; // buffer�� clone�� �����
		//����� �����鼭 clone ����ߴ� data�� ������� ������ ������ �߻����� ����.
	}
	buffer.data[0] = 2;

	return 0;
}