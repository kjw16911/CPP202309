#include <iostream>
#include <string>
using namespace std;

int main() 
{
	const int STUDENT = 5; //�迭�� ũ�� ����(�ʱ�ȭ)
	const int SUBJECT = 3; //�迭�� ũ�� ����(�ʱ�ȭ)
	int scores[STUDENT][SUBJECT]; //STUDENT ���� ũ��, SUBJECT ���� ũ��
	string studentNames[STUDENT] //�л� �̸� ����
		= { "����", "����", "ö��", "�̹�", "����" };
	string subjectNames[SUBJECT] //���� �̸� ����
		= { "����", "����", "CPP" };

	for (int i = 0; i < STUDENT; i++) {
		cout << studentNames[i]
			<< "�� ������ �ϳ��� �Է��Ͻÿ�." << endl;
		for (int j = 0; j < SUBJECT; j++) {
			cout << subjectNames[j] << ":";
			cin >> scores[i][j]; //���� �Է�
		}
	}

	for (int i = 0; i < STUDENT; i++) {
		cout << studentNames[i] << "�� ��� ������ ";
		double sum = 0; //��� ������ "�Ǽ�"�� �Է�
		double average = 0;
		for (int j = 0; j < SUBJECT; j++) {
			sum += scores[i][j]; //���� �ջ�
		}
		average = sum / SUBJECT;
		cout << average << "�Դϴ�." << endl;

	}
	return 0;
}