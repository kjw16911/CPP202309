//
//  main.cpp
//  tic_tac_toe 기능추가
//
//  Created by 김지웅 on 11/9/23.
//

#include <iostream>
using namespace std;

const int numCell = 5; // 보드판의 가로 세로 길이
int x, y = 0;
char board[numCell][numCell]{};
char currentUser;

bool isValid(int x, int y) {
    // TODO 4: isValid 함수 생성 후 호출
    if (x < 0 || y < 0 || x >= numCell || y >= numCell) {
        cout << x << "," << y << ": x와 y 둘 중 하나가 칸을 벗어났습니다." << endl;
        return false;
    }
    if (board[x][y] != ' ') {
        cout << x << "," << y << ": 이미 돌이 놓여 있습니다." << endl;
        return false;
    }
    return true;
}

bool checkWin(char currentPlayer) {
    // TODO 5: checkWin 함수 생성 후 호출
    // 5.1. 가로/세로 돌 체크하기
    for (int i = 0; i < numCell; i++) {
        if (board[i][0] == currentPlayer && board[i][1] == currentPlayer && board[i][2] == currentPlayer) {
            cout << "가로로 모두 돌이 놓였습니다!!" << endl;
            return true;
        }
        if (board[0][i] == currentPlayer && board[1][i] == currentPlayer && board[2][i] == currentPlayer) {
            cout << "세로로 모두 돌이 놓였습니다!!" << endl;
            return true;
        }
    }

    // 5.2. 대각선을 체크하기
    // 왼쪽 위에서 오른쪽 아래 대각선 빙고 체크
    int leftright = 0;
    for (int i = 0; i < numCell; i++)
    {
        if (board[i][i] == currentUser)
        {
            leftright++;
        }
    }
    if (leftright == numCell - 1)
    {
        cout << "왼쪽 위에서 오른쪽 아래 대각선으로 모두 돌이 놓였습니다. : ";
        return true;
    }

    // 오른쪽 위에서 왼쪽 아래 대각선 빙고 체크
    int rightleft = 0;
    for (int i = 0; i < numCell; i++)
    {
        if (board[i][numCell - i - 1] == currentUser)
        {
            rightleft++;
        }
    }
    if (rightleft == numCell - 1)
    {
        cout << "오른쪽 위에서 왼쪽 아래 대각선으로 모두 돌이 놓였습니다. : ";
        return true;
    }

    return false;
}

int main() {
    int k = 0; // 누구 차례인지 체크하기 위한 변수

    //보드판 초기화
    for (x = 0; x < numCell; x++) {
        for (y = 0; y < numCell; y++) {
            board[x][y] = ' ';
        }
    }
    // TODO 1: 3인이 게임하도록 확장 (돌: X O H, 순서 관계 없음)
    while (true) {
        char currentUser = 'X'; // 3명의 플레이어 돌 번갈아가며 선택
        switch (k % 3) {
        case 0:
            currentUser = 'X';
            break;
        case 1:
            currentUser = 'O';
            break;
        case 2:
            currentUser = 'H';
            break;
        }
        cout << k % 3 + 1 << "번 유저(" << currentUser << ")의 차례입니다. -> ";

        // 좌표 입력 받기
        cout << "(x, y) 좌표를 입력하세요: ";
        int x, y;
        cin >> x >> y;

        // 입력받은 좌표의 유효성 체크
        if (!isValid(x, y)) {
            continue;
        }

        // 입력받은 좌표에 현재 유저의 돌 놓기
        board[x][y] = currentUser;

        // 현재 보드 판 출력
        // TODO 2: numCell 숫자에 맞춘 보드판 출력
        for (int i = 0; i < numCell; i++) {
            cout << "---|";
        }
        cout << endl;

        for (int i = 0; i < numCell; i++) {
            for (int j = 0; j < numCell; j++) {
                cout << " " << board[i][j] << " |";
            }
            cout << endl;

            for (int j = 0; j < numCell; j++) {
                cout << "---|";
            }
            cout << endl;
        }

        // 승리가 결정되었으면 해당 플레이어를 출력하고 게임을 종료
        if (checkWin(currentUser)) {
            cout << k % 3 + 1 << "번 유저(" << currentUser << ")의 승리입니다!" << endl;
            break;
        }

        // 7. 모든 칸 다 찼는지 체크하기
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

        k++;
    }

    return 0;
}
