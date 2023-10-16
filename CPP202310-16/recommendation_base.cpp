#include <iostream>
using namespace std;

int main() {
	const int NUM_USERS = 3;
	const int NUM_ITEMS = 3;
	int userPreferences[NUM_USERS][NUM_ITEMS];

	for (int i = 0; i < NUM_USERS; ++i) {
		cout << "����� " << (i + 1) << "�� ��ȣ���� �Է��ϼ��� (";
		cout << NUM_ITEMS << "���� �׸� ���ؼ� ):";
		for (int j = 0; j < NUM_ITEMS; ++j) {
			cin >> userPreferences[i][j];
		}
		// ����ڿ� �׸� ���� ��ȣ���� �Է� �޾� 2���� �迭 �ʱ�ȭ
	}

	for (int i = 0; i < NUM_USERS; ++i) {
		int maxPreferenceIndex = 0;
		for (int j = 1; j < NUM_ITEMS; ++j) {
			if (userPreferences[i][j] > userPreferences[i][maxPreferenceIndex]) {
				maxPreferenceIndex = j;
			}
		}
		// �� ����ڿ� ���� ��õ �׸� ã��
		// �迭�� �ε��� �� j�� maxPreferenceIndex���� ũ�ٸ�
		// maxPreferenceIndex =j�� ��õ�׸� ����


		// ����ڿ��� ��õ�ϴ� �׸� ���
		cout << "����� " << (i + 1) << "���� ��õ�ϴ� �׸�: ";
		cout << (maxPreferenceIndex + 1) << endl;
	}
	return 0;
}