#include <iostream>
#include <stdlib.h> //C ���
using namespace std;

int main()
{
	const int numCell = 10;
	int numList[numCell][numCell];

	for (int i = 0; i < numCell; i++) {
		for (int j = 0; j < numCell; j++) {
			int elem = rand() % 1000; //0~999���� ���� ����
			numList[i][j] = elem;
			cout << i << ", " << j << " : " << elem << endl;
		}

	}

	cout << endl;

	int max = 0; // ū �� ������ ���� ���� // max�� rand()�� �ְ� �Ǹ� ���� ū ���� �� ���� �����Ƿ� ���� ���� ������ ����
	int maxI; // ū ���� �ִ� i�� �����ϱ� ���� ����
	int maxJ; // ū ���� �ִ� j�� �����ϱ� ���� ����
	int j;
	for (int i = 0; i < numCell; i++) {
		for (int j = 0; j < numCell; j++) {
			int value = numList[i][j];
			if (value > max) {
				max = value;
				maxI = i;
				maxJ = j;
			}
		}
	}

	for (int i = 0; i < numCell; i++) {
		j = 0; //j�� for�� ������ ���;� ��������� Ŀ��.
		for (auto value : numList[i]) {
			if (value > max) {
				max = value;
				maxI = i;
				maxJ = j;
			}
			j++; //j�� for���� ���� �ڿ� ����Ǳ� ������ �������� j++�� �ۼ��ؾ���.
		}
	}
	
	cout << "���� ū ���� " << max << "�̰�,";
	cout << "i�� j�� ���� " << maxI << ", " << maxJ
		<< "�Դϴ�." << endl;
	cout << "���� ��� : " << numList[maxI][maxJ] << endl;

	return 0;
}

//���� ��� ���� �߰�
//���� ��� ���� ����***