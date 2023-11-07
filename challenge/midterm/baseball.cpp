#include <iostream>
#include <string>
using namespace std;

int randomNum; // ����� �ϴ� 3�ڸ����� ���� ���� ����
int userNumber; // ����ڰ� �Է��� ���ڸ��� ���� ����
int guessFirst; // ������ ������ ù��° �ڸ���
int guessSecond; // ������ ������ �ι�° �ڸ���
int guessThird; // ������ ������ ����° �ڸ���
int firstNum; // ������ ù��° �ڸ���
int secondNum; // ������ �ι�° �ڸ���
int thirdNum; // ������ ����° �ڸ���
int strike = 0; // ��Ʈ����ũ ������ �����ϴ� ����
int ball = 0; // �� ������ �����ϴ� ����
bool same = false; // ��� ���� �ٸ� ��� true�� ���� ����

bool checkNumber(int userNumber) {
	guessFirst = userNumber / 100;
	guessSecond = (userNumber / 10) % 10;
	guessThird = userNumber % 10;

	if (guessFirst != guessSecond && guessFirst != guessThird && guessSecond != guessThird) {
		same = true;
	}
	return same;
}

int compareNumbers(int userNumber) {
	// TODO 2: ����� ������ ������ �ڸ����� ���ڸ� ���ϸ� ��Ʈ�� �ֱ� ���� �ڵ��� �ۼ�
	// �� �ڸ��� ���� ������ ���� �������� Ȯ���ϱ� ���� if���� Ȱ����.
	strike = 0;
	ball = 0;
	firstNum = randomNum / 100;
	secondNum = (randomNum / 10) % 10;
	thirdNum = randomNum % 10;

	if (firstNum == guessFirst) {
		strike += 1;
	}
	else if (firstNum == guessSecond || firstNum == guessThird) {
		ball += 1;
	}

	if (secondNum == guessSecond) {
		strike += 1;
	}
	else if (secondNum == guessFirst || secondNum == guessThird) {
		ball += 1;
	}

	if (thirdNum == guessThird) {
		strike += 1;
	}
	else if (thirdNum == guessFirst || thirdNum == guessSecond) {
		ball += 1;
	}
	if (strike == 0 && ball == 0) {
		cout << "�ƿ��Դϴ�." << endl;
	}

	cout << userNumber << "�� ��� : " << strike << " ��Ʈ����ũ, " << ball << " �� �Դϴ�." << endl;
	return strike;
}

int main() {
	randomNum = rand() % 900 + 100; // ������ 3�ڸ��� ����

	// TODO 1: 3�ڸ� ������ �ڸ����� �����ϰ�, ��� ���� �ٸ��� üũ�ϴ� �ڵ��� �ۼ�
	firstNum = randomNum / 100;
	secondNum = (randomNum / 10) % 10;
	thirdNum = randomNum % 10;

	int turn = 0;

	while (1) {
		cout << turn + 1 << "��° �õ��Դϴ�. " << endl;

		// ����ڿ��� ���ڸ� ���� �Է¹޴� �ڵ� ���
		while (1) {
			cout << "���ڸ� ���� �Է����ּ���: ";
			cin >> userNumber;
			// TODO 1 �ڵ� ����� �Լ�ȭ�� �Լ� ȣ��
			same = checkNumber(userNumber);
			if (to_string(userNumber).length() != 3) {
				cout << "�Էµ� ���ڰ� 3�ڸ� ���� �ƴմϴ�. �ٽ� �Է��ϼ���." << endl;
			}
			if (same == false) {
				cout << "�Է��� ���ڿ� �ߺ��� ���ڰ� �ֽ��ϴ�." << endl;
			}
			if (same == true) {
				break;
			}
		}

		// TODO 2 �ڵ� ����� �Լ�ȭ�� �Լ� ȣ��
		compareNumbers(userNumber);
		if (strike == 3) {
			cout << "������ ������ϴ�. �����մϴ�." << endl;
			break;
		}
		turn += 1;
	}
	return 0;
}
