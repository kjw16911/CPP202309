#include <iostream>
#include <fstream>
using namespace std;

int main() {
	ofstream os{ "numbers.txt" }; //������ ��� ��Ʈ�� ���� �� �ʱ�ȭ
	//�ַ�� => ���� Ž���⿡�� ���� ����� ���� Ȯ�� ����
	if (!os) {
		cerr << "���� ���¿� �����߽��ϴ�." << endl; 
		// cerr : ǥ�� ���� ��� ��Ʈ��
		// ���� �޽��� ��� �� ���
		exit(1);
	}

	for (int i = 0; i < 100; i++)
		os << i << " "; //���Ͽ� ������ ���
	return 0;
}