#include <iostream>
#include <string>
using namespace std;


int main()
{
	const int maxPeople = 3;
	//cout << "�� ���� ���� �Է��϶� : ";
	//cin >> maxPeople;
	string names[maxPeople];
	int ages[maxPeople];

	for (int i = 0; i < maxPeople; i++) {
		cout << "���" << i + 1 << "�� �̸� : ";
		cin >> names[i];
		cout << "���" << i + 1 << "�� ���� : ";
		cin >> ages[i];
	}

	int ageThreshold;
	cout << "Ư�� ���� �̻��� ����� ã������ ���̸� �Է��Ͻÿ� : ";
	cin >> ageThreshold;

	cout << ageThreshold << "�� �̻��� ���� : \n";
	int detectedPeople = 0;
	for (int i = 0; i < maxPeople; i++) {
		if (ages[i] >= ageThreshold) {
			cout << names[i] << " (" << ages[i] << "��)\n";
			detectedPeople ++;

		}
	}
	if (detectedPeople == 0) {
		cout << ageThreshold << "�̻��� ���̸� ���� ���� �����ϴ�.";
	}
	return 0;
}