#include <iostream>
#include <string>
using namespace std;


int main()
{
	const int maxPeople = 3;
	//cout << "총 고객의 수를 입력하라 : ";
	//cin >> maxPeople;
	string names[maxPeople];
	int ages[maxPeople];

	for (int i = 0; i < maxPeople; i++) {
		cout << "사람" << i + 1 << "의 이름 : ";
		cin >> names[i]; 
		cout << "사람" << i + 1 << "의 나이 : ";
		cin >> ages[i]; 
	}
	//names[maxPeople]에 해당
	//age[maxPeople]에 해당

	int ageThreshold;
	cout << "특정 나이 이상인 사람을 찾으려면 나이를 입력하시오 : ";
	cin >> ageThreshold;

	cout << ageThreshold << "세 이상인 고객들 : \n";
	int detectedPeople = 0;
	for (int i = 0; i < maxPeople; i++) { // for문과 if문을 활용하여 입력된 사람들의 정보를 확인함.
		if (ages[i] >= ageThreshold) {
			cout << names[i] << " (" << ages[i] << "세)\n";
			detectedPeople ++;

		}
	}
	if (detectedPeople == 0) {
		cout << ageThreshold << "이상의 나이를 가진 고객이 없습니다.";
	}
	return 0;
	//시험에 내기 좋은 유형의 문제
}