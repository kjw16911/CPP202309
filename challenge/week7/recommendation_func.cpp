#include <iostream>
using namespace std;

// 두 함수 모두에서 변수를 사용하기 때문에 전역변수로 설정
const int NUM_USERS = 3;
const int NUM_ITEMS = 3;
int userPreferences[NUM_USERS][NUM_ITEMS];

// 사용자 선호도를 입력 받은 함수 생성
void initializePreferences(int preferences[NUM_USERS][NUM_ITEMS]) 
//매개변수 preferences[][]는 배열 타입이기 때문에 매개변수를 선언할 때 작성할것
{
	for (int i = 0; i < NUM_USERS; ++i) {
		cout << "사용자 " << (i + 1) << "의 선호도를 입력하세요 (";
		cout << NUM_ITEMS << "개의 항목에 대해서 ):";
		for (int j = 0; j < NUM_ITEMS; ++j) {
			cin >> userPreferences[i][j];
		}
		// 사용자와 항목 간의 선호도를 입력 받아 2차원 배열 초기화
	}
}
// 사용자별 추천 항목을 찾고 출력하는 함수 생성
void findRecommendedItems(const int preferences[NUM_USERS][NUM_ITEMS]) 
//매개변수 preferences[][]는 배열 타입이기 때문에 매개변수를 선언할 때 작성할것
{
	for (int i = 0; i < NUM_USERS; ++i) {
		int maxPreferenceIndex = 0;
		for (int j = 1; j < NUM_ITEMS; ++j) {
			if (userPreferences[i][j] > userPreferences[i][maxPreferenceIndex]) {
				maxPreferenceIndex = j;
			}
		}
		cout << "사용자 " << (i + 1) << "에게 추천하는 항목: ";
		cout << (maxPreferenceIndex + 1) << std::endl;
		// namespace std를 작성 안할 경우 std:: 작성
	}
}

int main() {

	initializePreferences(userPreferences);
	findRecommendedItems(userPreferences);
	return 0;
}