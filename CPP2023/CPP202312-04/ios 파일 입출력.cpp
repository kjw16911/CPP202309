#include <iostream>
#include <fstream>
using namespace std;

int main() {
	for (int i = 0; i < 2; i++) {
		//ios::out �÷��׸� ����Ͽ� ���Ͽ� ����
		ofstream outFileOut("output.txt", ios::out);
		if (outFileOut.is_open()) {
			outFileOut << "ios::out�� ����� ���� ����" << i << endl;
			outFileOut.close();
		}
		else {
			cerr << "������ �� �� �����ϴ�." << endl;
			return 1;
		}
		//������ ���� ���� ���� ������ ���� ������ �ۼ��� ���� ���� ���Ͽ� ���
	}

	for (int i = 0; i < 2; i++) {
		ofstream outFileAppend("append.txt", ios::app);
		if (outFileAppend.is_open()) {
			outFileAppend << "ios::app�� ����� ���� ����" << i << endl;
			outFileAppend.close();
		}
		else {
			cerr << "������ �� �� �����ϴ�." << endl;
			return 1;
		}
		//������ ���� ���� ���� �߰��Ǵ� �����͸� ���� �߰���.
	}

	for (int i = 0; i < 2; i++) {
		ofstream outFileTrucate("truncate.txt", ios::trunc);
		if(outFileTrucate.is_open()){
			outFileTrucate << "ios::trunc�� ����� ���� ����" << i << endl;
			outFileTrucate.close();
		}
		else {
			cerr << "������ �� �� �����ϴ�." << endl;
			return 1;
		}
		// ������ ���� ���� ���� �����͸� ���Ӱ� �ۼ�
	}
	cout << "���� �۾��� �Ϸ��߽��ϴ�." << endl;
	return 0;
}