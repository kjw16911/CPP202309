#include <iostream>
using namespace std;

class MyArray {
public:
	int size;
	int* data; //������ ����

	MyArray(int size) {
		this->size = size;
		data = new int[size];//���� �޸� ����
	}
	~MyArray() {
		if (data != NULL)
			delete[] this->data; //���� �޸� ��ȯ
	}

};
int main() {
	MyArray buffer(10);
	buffer.data[0] = 1;
	{
		MyArray clone = buffer; // buffer�� clone�� �����
		//����� �����鼭 clone ��� ����.
	}
	buffer.data[0] = 2;

	return 0;
}
//������ ���� ������ buffer�� clone�� �����ߴµ� ��� ������ �����ǰ� �Ҹ�Ǵµ�
//clone�� ������鼭 new int���� ���� �����迭�� ���� ������鼭 buffer���� �ҷ��� �� ����