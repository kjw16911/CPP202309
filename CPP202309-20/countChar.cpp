#include <iostream>
using namespace std;

int main()
{
	int vowel = 0;
	int consonant = 0;
	cout << "�����ڸ� �Է��ϰ� ctrl+z�� ġ����." << endl;

	char ch; // ����� �Է� �����ϱ� ���� ����

	// Hint : while + switch�� Ȱ��
	while (cin >> ch)
	{
		switch (ch) {
			//'a'�� int �������� ���� �ϹǷ� ""�� �ƴ� ''�� �ۼ��� ��
		case 'a': case 'e': case 'i': case 'o': case 'u':
			vowel++;
			break;
		default: //���� �̿��� �͵��� �������� ����Ʈ��.
			consonant++;
		}
	}

	cout << "����: " << vowel << endl;
	cout << "����: " << consonant << endl;
	return 0;
}