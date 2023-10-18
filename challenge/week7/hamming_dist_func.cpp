#include <iostream>
#include <string>
using namespace std;

string toLowerStr(string str)
{
	string str_1 = str ; //���� �Ű� ���� ������
	//���������� ������ �� string str�� �ƴ� ���ο� �ٸ� �̸����� ������ ��
	for (char & c : str_1) {
		c = tolower(c);
	}
	return str_1;
}

string toUpperStr(string str)
{
	string str_2 = str;
	for (char & c : str_2) {
		c = toupper(c);
	}
	return str_2;
}

int calcHammingDist(string s1, string s2)
{
	int count = 0;
	s1= toLowerStr(s1);//toLowerStr�̵� toUpperStr�̵� �������.
	s2= toLowerStr(s2);
	for (int i = 0; i < s1.length(); i++) {
		if (s1[i] != s2[i])
			count += 1;
	}
	return count;
}

int main()
{
	string s1, s2;
	int count = 0;

	cout << "DNA1 : ";
	cin >> s1;
	cout << "DNA2 : ";
	cin >> s2;

	if (s1.length() != s2.length())
		cout << "���� : ���̰� �ٸ�";

	else {
		for (int i = 0; i < s1.length(); i++) {
			if (s1[i] != s2[i])
				count += 1;
		}
		cout << "�ع� �Ÿ��� " << count << endl;
	}
	cout << "calcHammingDist(s1, s2)�� ��� = " << calcHammingDist(s1, s2) << endl;
	return 0;
}
// �� ���ڿ��� ��� �� ���ڿ� ������ �Ÿ��� ���ϰ� �װ��� ����� ���ϴ� ����
