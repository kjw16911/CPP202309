#include <iostream>
#include <time.h> // rand() �Լ��� ȣ���ϱ� ���� ��� ����
using namespace std;

int main()
{
	srand(time(NULL)); // random �Լ� ���� ����

	int answer = rand() % 100; // ����
	int tries = 0; // �õ� Ƚ�� �����ϴ� ����

	int guess; // ����� �Է� �����ϱ� ���� ����

	// Hint : while / do-while��

	do {
		cout << "������ �����Ͽ� ���ÿ�: ";
		cin >> guess;
		tries++;

		if (guess > answer)
			cout << "������ ������ �����ϴ�." << endl;
		if (guess < answer)
			cout << "������ ������ �����ϴ�." << endl;
		//else if�� �Ⱦ��� ������ 2���� �ۼ�
	} while (guess != answer);

	cout << "�����մϴ�. �õ� Ƚ��= " << tries << endl;
	return 0;

}