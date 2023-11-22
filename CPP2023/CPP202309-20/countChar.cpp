#include <iostream>
using namespace std;

int main()
{
	int vowel = 0;
	int consonant = 0;
	cout << "영문자를 입력하고 ctrl+z를 치세요." << endl;

	char ch; // 사용자 입력 저장하기 위한 변수

	// Hint : while + switch문 활용
	while (cin >> ch)
	{
		switch (ch) {
			//'a'가 int 형식으로 들어가야 하므로 ""가 아닌 ''로 작성할 것
		case 'a': case 'e': case 'i': case 'o': case 'u':
			vowel++;
			break;
		default: //모음 이외의 것들을 자음으로 디폴트함.
			consonant++;
		}
	}

	cout << "모음: " << vowel << endl;
	cout << "자음: " << consonant << endl;
	return 0;
}