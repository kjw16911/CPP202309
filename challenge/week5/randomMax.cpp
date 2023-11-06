#include <iostream>
#include <stdlib.h> //C 헤더
using namespace std;

int main()
{
	const int numCell = 10;
	int numList[numCell][numCell];

	for (int i = 0; i < numCell; i++) {
		for (int j = 0; j < numCell; j++) {
			int elem = rand() % 1000; //0~999까지 난수 생성
			numList[i][j] = elem;
			cout << i << ", " << j << " : " << elem << endl;
		}

	}

	cout << endl;

	int max = 0; // 큰 값 저장을 위한 변수 // max에 rand()를 넣게 되면 제일 큰 값이 들어갈 수도 있으므로 제일 작은 값으로 지정
	int maxI; // 큰 값이 있는 i를 저장하기 위한 변수
	int maxJ; // 큰 값이 있는 j를 저장하기 위한 변수
	int j;
	for (int i = 0; i < numCell; i++) {
		for (int j = 0; j < numCell; j++) {
			int value = numList[i][j];
			if (value > max) {
				max = value;
				maxI = i;
				maxJ = j;
			}
		}
	}

	for (int i = 0; i < numCell; i++) {
		j = 0; //j가 for문 안으로 들어와야 계속적으로 커짐.
		for (auto value : numList[i]) {
			if (value > max) {
				max = value;
				maxI = i;
				maxJ = j;
			}
			j++; //j는 for문이 끝난 뒤에 실행되기 때문에 마지막에 j++을 작성해야함.
		}
	}
	
	cout << "가장 큰 값은 " << max << "이고,";
	cout << "i와 j는 각각 " << maxI << ", " << maxJ
		<< "입니다." << endl;
	cout << "검증 결과 : " << numList[maxI][maxJ] << endl;

	return 0;
}

//범위 기반 문장 추가
//범위 기반 문제 출제***