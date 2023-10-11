#include <iostream>
using namespace std;

int main() 
{
	const int numCell = 3; //상수 설정
	char board[numCell][numCell]{}; //맨 뒤의 {} :배열의 모든 칸을 0 또는 null로 초기화
	int x, y; // 보드판 위치 변수 선언
	
	// 보드판
	for (x = 0; x < numCell; x++) {
		for (y = 0; y < numCell; y++) {
			board[x][y] = ' ';
		}
	}

	//게임 코드
	int k = 0; //순서 확인을 위한 변수 선언
	char currentUser = 'X';
	while (true) {
		//순서 출력 k값을 2로 나누어 나머지 0과 1로 구분
		switch (k % 2) {
		case 0:
			cout << k % 2 + 1 << "번 유저(X)의 차례입니다 -> ";
			currentUser = 'X';
			break;
		case 1:
			cout << k % 2 + 1 << "번 유저(O)의 차례입니다 -> ";
			currentUser = 'O';
			break;
		}
		cout << "(x, y) 좌표를 입력하세요 : ";
		cin >> x >> y;

		// 3. 좌표의 유효성을 체크함.
		if (x >= numCell || y >= numCell) {
			cout << x << ", " << y << ": ";
			cout << "x와 y 둘 중 하나가 칸을 벗어났습니다.";
			continue;
			//x나 y값이 3보다 큰 값이 나오면 벗어나 오류 발생
		}
		if (board[x][y] != ' ') {
			cout << x << ", " << y << ": 이미 돌이 차있습니다." << endl;
			continue;
			//값이 겹치게 되면 오류 발생
		}
		// 입력받은 좌표에 돌 놓기
		board[x][y] = currentUser;

		// 보드판 출력
		for (int i = 0; i < numCell; i++) {
			cout << "---|---|---" << endl;
			for (int j = 0; j < numCell; j++) {
				cout << board[i][j];
				if (j == numCell - 1) {
					break;
				}
				cout << "  |";

			}
			cout << endl;
		}
		cout << "---|---|---" << endl;
		
		// 모든 돌이 다 찼는 경우 종료
		int checked = 0;
		for (int i = 0; i < numCell; i++) {
			for (int j = 0; j < numCell; j++) {
				if (board[i][j] == ' ') {
					checked++;
				}
			}
		}
		if (checked == 0) {
			cout << "모든 칸이 다 찼습니다. 종료합니다." << endl;
			break;
		}
		// 빙고가 완성된 경우 종류
		bool isWin = false;
		for (int i = 0; i < numCell; i++) {
			if (board[i][0] == currentUser && board[i][1] == currentUser && board[i][2] == currentUser) { //가로줄에 i를 넣어 모두 찼는지 확인
				cout << "가로에 모두 돌이 놓였습니다. : ";
				isWin = true;
			}
			if (board[0][i] == currentUser && board[1][i] == currentUser && board[2][i] == currentUser) { //세로줄에 i를 넣어 모두 찼는지 확인
				cout << "세로에 모두 돌이 놓였습니다. : ";
				isWin = true;
			}
		}

		if (board[0][0] == currentUser && board[1][1] == currentUser && board[2][2] == currentUser) { 
			cout << "왼쪽 위에서 오른쪽 아래 대각선으로 모두 돌이 놓였습니다. : ";
			isWin = true;
		}
		if (board[0][2] == currentUser && board[1][1] == currentUser && board[2][0] == currentUser) {
			cout << "오른쪽 위에서 왼쪽 아래 대각선으로 모두 돌이 놓였습니다. : ";
			isWin = true;

		}
		if (isWin == true) {
			cout << k % 2 + 1 << "번 유저(" << currentUser << ")의 승리입니다." << endl;
			cout << "종료합니다." << endl;
			break;
		}
		k++; //마지막에 k++를 해야 while문에서 번호가 바뀌지 않음.
	}
	return 0;
	
}