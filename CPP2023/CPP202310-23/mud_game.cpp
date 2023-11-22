#include <iostream>
#include <string>
using namespace std;

//�� ������ ����
const int mapX = 5;
const int mapY = 5;

//���� ü�� ����
int hp = 20;

// ����� ���� �Լ� (�Լ� ����)
// �̵��ϴ� ��ǥ�� ���� ��������� Ȯ���ϴ� �Լ�
bool checkXY(int user_x, int mapX, int user_y, int mapY);

// '����'��� ��ɾ ����df ���� �� ���¸� �����ִ� �Լ�
void displayMap(int map[][mapX], int user_x, int user_y);

// ���� ��ġ�� ������������ üũ�ϴ� �Լ�
bool checkGoal(int map[][mapX], int user_x, int user_y);

// ������/����/���� ������ �� �ش� ȿ���� �޼��� ����ϴ� �Լ�
bool checkState(int map[][mapX], int user_x, int user_y);

// ����  �Լ�
int main() {
	// 0�� �� ����, 1�� ������, 2�� ��, 3�� ����, 4�� ������
	int map[mapY][mapX] = { {0, 1, 2, 0, 4},
					{1, 0, 0, 2, 0},
					{0, 0, 0, 0, 0},
					{0, 2, 3, 0, 0},
					{3, 0, 0, 0, 2} };
	// x�� ���θ� y�� ���θ� �ǹ��ϹǷ� �迭 ������ ����


	// ������ ��ġ�� ������ ����
	int user_x = 0; // ���� ��ȣ
	int user_y = 0; // ���� ��ȣ

	// ���� ���� 
	while (1) { // ����ڿ��� ��� �Է¹ޱ� ���� ���� ����

		// ������� �Է��� ������ ����
		string user_input = "";

		cout << "���� HP : " << hp;
		cout << " ��ɾ �Է��ϼ��� (��, ��, ��, ��, ����, ����) : ";
		cin >> user_input;

		//����ڿ��� �Է¹��� ���� ���� �ൿ ����(if�� Ȱ��)
		if (user_input == "��") {
			// ���� �� ĭ �ö󰡱�
			user_y -= 1;
			//2���� �迭�� ������ ���� ��ܿ��� �����ϹǷ� -1�� �ؾ� ��ĭ ���� �ö�.
			bool inMap = checkXY(user_x, mapX, user_y, mapY);
			if (inMap == false) {
				cout << "���� ������ϴ�. �ٽ� ���ư��ϴ�." << endl;
				user_y += 1; //�̹� ���� �ö� �����̹Ƿ� ���� ����� ��� �ٽ� ���󺹱��ؾ� ��.
			}
			else {
				hp -= 1;
				cout << "���� �� ĭ �ö󰩴ϴ�." << endl;
				displayMap(map, user_x, user_y);
			}
		}
		else if (user_input == "��") {
			// TODO: �Ʒ��� �� ĭ ��������
			user_y += 1;
			bool inMap = checkXY(user_x, mapX, user_y, mapY);
			if (inMap == false) {
				cout << "���� ������ϴ�. �ٽ� ���ư��ϴ�." << endl;
				user_y -= 1;
			}
			else {
				hp -= 1;
				cout << "�Ʒ��� �� ĭ �������ϴ�." << endl;
				displayMap(map, user_x, user_y);
			}
		}
		else if (user_input == "��") {
			// TODO: �������� �̵��ϱ�
			user_x -= 1;
			bool inMap = checkXY(user_x, mapX, user_y, mapY);

			if (inMap == false) {
				cout << "���� ������ϴ�. �ٽ� ���ư��ϴ�." << endl;
				user_x += 1;
			}
			else {
				hp -= 1;
				cout << "�������� �̵��մϴ�." << endl;
				displayMap(map, user_x, user_y);
			}
		}
		else if (user_input == "��") {
			// TODO: ���������� �̵��ϱ�
			user_x += 1;
			bool inMap = checkXY(user_x, mapX, user_y, mapY);
			if (inMap == false) {
				cout << "���� ������ϴ�. �ٽ� ���ư��ϴ�." << endl;
				user_x -= 1;
			}
			else {
				hp -= 1;
				cout << "���������� �̵��մϴ�." << endl;
				displayMap(map, user_x, user_y);
			}
		}
		else if (user_input == "����") {
			// TODO: ���� �����ֱ� �Լ� ȣ��
			displayMap(map, user_x, user_y);
		}
		else if (user_input == "����") {
			cout << "�����մϴ�.";
			break;
		}
		//else if���� �ݺ������� Ȱ���Ͽ� ��ɾ� ����
		else {
			cout << "�߸��� �Է��Դϴ�." << endl;
			continue;
		}

		if (hp == 0) {
			cout << "HP�� 0�� �Ǿ����ϴ�. " << "�����Ͽ����ϴ�." << endl;
			cout << "������ �����մϴ�.";
			break;
		}

		// �������� �����ߴ��� üũ
		bool finish = checkGoal(map, user_x, user_y);
		if (finish == true) {
			cout << "�������� �����߽��ϴ�! �����մϴ�!" << endl;
			cout << "������ �����մϴ�." << endl;
			break;
		}

		checkState(map, user_x, user_y);

	}
	return 0;
}


// ������ ����� ��ġ ����ϴ� �Լ�
void displayMap(int map[][mapX], int user_x, int user_y) {
	for (int i = 0; i < mapY; i++) {
		for (int j = 0; j < mapX; j++) {
			if (i == user_y && j == user_x) {
				cout << " USER |"; // �� �� 1ĭ ����
			}
			else {
				int posState = map[i][j];
				switch (posState) {
				case 0:
					cout << "      |"; // 6ĭ ����
					break;
				case 1:
					cout << "������|";
					break;
				case 2:
					cout << "  ��  |"; // �� �� 2ĭ ����
					break;
				case 3:
					cout << " ���� |"; // �� �� 1ĭ ����
					break;
				case 4:
					cout << "������|";
					break;
				}
			}
		}
		cout << endl;
		cout << " -------------------------------- " << endl;
	}
}

// �̵��Ϸ��� ���� ��ȿ�� ��ǥ���� üũ�ϴ� �Լ�
bool checkXY(int user_x, int mapX, int user_y, int mapY) {
	bool checkFlag = false;
	if (user_x >= 0 && user_x < mapX && user_y >= 0 && user_y < mapY) {
		checkFlag = true;
	}
	return checkFlag;
}

// ������ ��ġ�� ���������� üũ�ϴ� �Լ�
bool checkGoal(int map[][mapX], int user_x, int user_y) {
	// ������ �����ϸ�
	if (map[user_y][user_x] == 4) {
		return true;
	}
	return false;
}

// ������/����/���� ������ �� �ش� ȿ���� �޼��� ����ϴ� �Լ�
bool checkState(int map[][mapX], int user_x, int user_y) {
	bool isItem = (map[user_y][user_x] == 1);
	bool isPotion = (map[user_y][user_x] == 3);
	bool isEnemy = (map[user_y][user_x] == 2);

	// ������, ����, �� ���θ� ���
	if (isItem == true) {
		cout << "�������� �ֽ��ϴ�." << endl;
	}
	else if (isPotion == true) {
		hp += 2;
		cout << "������ �ֽ��ϴ�. HP�� 2 ȸ���˴ϴ�." << endl;
	}
	else if (isEnemy == true) {
		hp -= 2;
		cout << "���� �ֽ��ϴ�. HP�� 2 �پ��ϴ�." << endl;
	}
	else {
		false;
	}

	// ������, ����, �� �� �ϳ��� �ִ��� ���θ� ��ȯ
	return (isItem || isPotion || isEnemy);
}
