#include <iostream>
#include <string>
using namespace std;
//���� ������ �̵�
int randomNum; // ����� �ϴ� 3�ڸ����� ���� ���� ����
int userNumber; // ����ڰ� �Է��� ���ڸ��� ���� ����
int guessFirst = userNumber / 100; // ������ ������ ù��° �ڸ���
int guessSecond = (userNumber - 100 * guessFirst) / 10; // ������ ������ �ι�° �ڸ���
int guessThird = (userNumber - 100 * guessFirst - 10 * guessSecond) / 1; // ������ ������ ����° �ڸ���
int firstNum = randomNum / 100; // ������ ù��° �ڸ���
int secondNum = (randomNum - 100 * firstNum) / 10; // ������ �ι�° �ڸ���
int thirdNum = (randomNum - 100 * firstNum - 10 * secondNum) / 1; // ������ ����° �ڸ���
int strike = 0; // ��Ʈ����ũ ������ �����ϴ� ����
int ball = 0; // �� ������ �����ϴ� ����

bool checkNumber(bool same) {
	// TODO 1: 3�ڸ� ������ �ڸ����� �����ϰ�, ��� ���� �ٸ��� üũ�ϴ� �ڵ��� �ۼ�
	while (1) {
		randomNum = rand() % 900 + 100; // ������ 3�ڸ��� ����
		bool same = false; // ��� ���� �ٸ� ��� true�� ���� ����

		// ������ �ڸ����� ���� �������� Ȯ��
		if (guessFirst == guessSecond || guessFirst == guessThird || guessSecond == guessThird) {
			cout << "�Է��� ���ڿ� �ߺ��� ���ڰ� �ֽ��ϴ�. " << "�ٽ� �Է����ּ���" << endl;
			same = false;
			continue;
		}
		else if(same == true) {
			break;
		}
	}
	// TODO 2: ����� ������ ������ �ڸ����� ���ڸ� ���ϸ� ��Ʈ�� �ֱ� ���� �ڵ��� �ۼ�
	// �� �ڸ��� ���� ������ ���� �������� Ȯ���ϱ� ���� if���� Ȱ����.
	if (firstNum == guessFirst) {
		strike += 1;
	}
	else if (firstNum == guessSecond) {
		ball += 1;
	}
	else if (firstNum == guessThird) {
		ball += 1;
	}
	if (secondNum == guessSecond) {
		strike += 1;
	}
	else if (secondNum == guessFirst) {
		ball += 1;
	}
	else if (secondNum == guessThird) {
		ball += 1;
	}
	if (thirdNum == guessThird) {
		strike += 1;
	}
	else if (thirdNum == guessFirst) {
		ball += 1;
	}
	else if (thirdNum == guessSecond) {
		ball += 1;
	}
	else if(firstNum != guessFirst && firstNum != guessSecond && firstNum != guessThird && secondNum != guessFirst && secondNum != guessSecond && secondNum != guessThird && thirdNum != guessFirst && thirdNum != guessSecond && thirdNum != guessThird)
	{
		cout << "�ƿ��Դϴ�." << endl;
	}
	cout << userNumber << "�� ��� : " << strike << " ��Ʈ����ũ, " << ball << "�� �Դϴ�." << endl;
	
	return same;
}
int main() {

	randomNum = rand() % 900 + 100; // ������ 3�ڸ��� ����

	int turn = 0;
	while (1) {
		cout << turn + 1 << "��° �õ��Դϴ�. " << endl;




		// ����ڿ��� ���ڸ� ���� �Է¹޴� �ڵ� ���
		while (1) {
			cout << "���ڸ� ���� �Է����ּ���: ";
			cin >> userNumber;

			bool same = false; // ��� ���� �ٸ� ��� true�� ���� ����




			if (to_string(userNumber).length() != 3) {
				cout << "�Էµ� ���ڰ� 3�ڸ� ���� �ƴմϴ�. �ٽ� �Է��ϼ���." << endl;
				continue;
			}

			if (same == true) {
				break;
			}
		}

		if (strike == 3) {	
			cout << "������ ������ϴ�. �����մϴ�.";
			break;
		}

		turn += 1;
	}
	// TODO 1�� TODO 2 �ڵ� ����� �Լ�ȭ�� �Լ� ȣ��
	bool check = false;
	check = checkNumber(check);
	check;
	return 0;
}
