#include <iostream>
using namespace std;

// �� �Լ� ��ο��� ������ ����ϱ� ������ ���������� ����
const int NUM_USERS = 3;
const int NUM_ITEMS = 3;
int userPreferences[NUM_USERS][NUM_ITEMS];

// ����� ��ȣ���� �Է� ���� �Լ� ����
void initializePreferences(int preferences[NUM_USERS][NUM_ITEMS]) 
//�Ű����� preferences[][]�� �迭 Ÿ���̱� ������ �Ű������� ������ �� �ۼ��Ұ�
{
	for (int i = 0; i < NUM_USERS; ++i) {
		cout << "����� " << (i + 1) << "�� ��ȣ���� �Է��ϼ��� (";
		cout << NUM_ITEMS << "���� �׸� ���ؼ� ):";
		for (int j = 0; j < NUM_ITEMS; ++j) {
			cin >> userPreferences[i][j];
		}
		// ����ڿ� �׸� ���� ��ȣ���� �Է� �޾� 2���� �迭 �ʱ�ȭ
	}
}
// ����ں� ��õ �׸��� ã�� ����ϴ� �Լ� ����
void findRecommendedItems(const int preferences[NUM_USERS][NUM_ITEMS]) 
//�Ű����� preferences[][]�� �迭 Ÿ���̱� ������ �Ű������� ������ �� �ۼ��Ұ�
{
	for (int i = 0; i < NUM_USERS; ++i) {
		int maxPreferenceIndex = 0;
		for (int j = 1; j < NUM_ITEMS; ++j) {
			if (userPreferences[i][j] > userPreferences[i][maxPreferenceIndex]) {
				maxPreferenceIndex = j;
			}
		}
		cout << "����� " << (i + 1) << "���� ��õ�ϴ� �׸�: ";
		cout << (maxPreferenceIndex + 1) << std::endl;
		// namespace std�� �ۼ� ���� ��� std:: �ۼ�
	}
}

int main() {

	initializePreferences(userPreferences);
	findRecommendedItems(userPreferences);
	return 0;
}