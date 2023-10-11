#include <iostream>
using namespace std;

int main() 
{
	const int numCell = 3; //��� ����
	char board[numCell][numCell]{}; //�� ���� {} :�迭�� ��� ĭ�� 0 �Ǵ� null�� �ʱ�ȭ
	int x, y; // ������ ��ġ ���� ����
	
	// ������
	for (x = 0; x < numCell; x++) {
		for (y = 0; y < numCell; y++) {
			board[x][y] = ' ';
		}
	}

	//���� �ڵ�
	int k = 0; //���� Ȯ���� ���� ���� ����
	char currentUser = 'X';
	while (true) {
		//���� ��� k���� 2�� ������ ������ 0�� 1�� ����
		switch (k % 2) {
		case 0:
			cout << k % 2 + 1 << "�� ����(X)�� �����Դϴ� -> ";
			currentUser = 'X';
			break;
		case 1:
			cout << k % 2 + 1 << "�� ����(O)�� �����Դϴ� -> ";
			currentUser = 'O';
			break;
		}
		cout << "(x, y) ��ǥ�� �Է��ϼ��� : ";
		cin >> x >> y;

		// 3. ��ǥ�� ��ȿ���� üũ��.
		if (x >= numCell || y >= numCell) {
			cout << x << ", " << y << ": ";
			cout << "x�� y �� �� �ϳ��� ĭ�� ������ϴ�.";
			continue;
			//x�� y���� 3���� ū ���� ������ ��� ���� �߻�
		}
		if (board[x][y] != ' ') {
			cout << x << ", " << y << ": �̹� ���� ���ֽ��ϴ�." << endl;
			continue;
			//���� ��ġ�� �Ǹ� ���� �߻�
		}
		// �Է¹��� ��ǥ�� �� ����
		board[x][y] = currentUser;

		// ������ ���
		for (int i = 0; i < numCell; i++) {
			cout << "---|---|---" << endl;
			for (int j = 0; j < numCell; j++) {
				cout << board[i][j];
				if (j == numCell - 1) {
					break;
				}
				cout << "  |";

			}
			cout << endl;
		}
		cout << "---|---|---" << endl;
		
		// ��� ���� �� á�� ��� ����
		int checked = 0;
		for (int i = 0; i < numCell; i++) {
			for (int j = 0; j < numCell; j++) {
				if (board[i][j] == ' ') {
					checked++;
				}
			}
		}
		if (checked == 0) {
			cout << "��� ĭ�� �� á���ϴ�. �����մϴ�." << endl;
			break;
		}
		// ���� �ϼ��� ��� ����
		bool isWin = false;
		for (int i = 0; i < numCell; i++) {
			if (board[i][0] == currentUser && board[i][1] == currentUser && board[i][2] == currentUser) { //�����ٿ� i�� �־� ��� á���� Ȯ��
				cout << "���ο� ��� ���� �������ϴ�. : ";
				isWin = true;
			}
			if (board[0][i] == currentUser && board[1][i] == currentUser && board[2][i] == currentUser) { //�����ٿ� i�� �־� ��� á���� Ȯ��
				cout << "���ο� ��� ���� �������ϴ�. : ";
				isWin = true;
			}
		}

		if (board[0][0] == currentUser && board[1][1] == currentUser && board[2][2] == currentUser) { 
			cout << "���� ������ ������ �Ʒ� �밢������ ��� ���� �������ϴ�. : ";
			isWin = true;
		}
		if (board[0][2] == currentUser && board[1][1] == currentUser && board[2][0] == currentUser) {
			cout << "������ ������ ���� �Ʒ� �밢������ ��� ���� �������ϴ�. : ";
			isWin = true;

		}
		if (isWin == true) {
			cout << k % 2 + 1 << "�� ����(" << currentUser << ")�� �¸��Դϴ�." << endl;
			cout << "�����մϴ�." << endl;
			break;
		}
		k++; //�������� k++�� �ؾ� while������ ��ȣ�� �ٲ��� ����.
	}
	return 0;
	
}