#include <iostream>
#include <string>
#include <vector>
using namespace std;


int main()
{
	const int maxPeople = 3;
	//cout << "�� ���� ���� �Է��϶� : ";
	//cin >> maxPeople;

	vector<string> names;
	vector<int> ages;
	
	for (int i = 0; i < maxPeople; i++) {
		string names;
		int ages;

		cout << "���" << i + 1 << "�� �̸� : ";
		cin >> names; //names[maxPeople]�� �ش�
		names.push_back(names);
		cout << "���" << i + 1 << "�� ���� : ";
		cin >> ages; //age[maxPeople]�� �ش�
		ages.push_back();
	}

	int ageThreshold;
	cout << "Ư�� ���� �̻��� ����� ã������ ���̸� �Է��Ͻÿ� : ";
	cin >> ageThreshold;

	cout << ageThreshold << "�� �̻��� ���� : \n";
	int detectedPeople = 0;
	for (int i = 0; i < maxPeople; i++) { // for���� if���� Ȱ���Ͽ� �Էµ� ������� ������ Ȯ����.
		if (ages[i] >= ageThreshold) {
			cout << names[i] << " (" << ages[i] << "��)\n";
			detectedPeople++;

		}
	}
	if (detectedPeople == 0) {
		cout << ageThreshold << "�̻��� ���̸� ���� ���� �����ϴ�.";
	}
	return 0;
	//���迡 ���� ���� ������ ����
}