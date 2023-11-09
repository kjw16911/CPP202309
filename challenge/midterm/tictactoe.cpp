//
//  main.cpp
//  tic_tac_toe ����߰�
//
//  Created by ������ on 11/9/23.
//

#include <iostream>
using namespace std;

const int numCell = 5; // �������� ���� ���� ����
int x, y = 0;
char board[numCell][numCell]{};
char currentUser;

bool isValid(int x, int y) {
    // TODO 4: isValid �Լ� ���� �� ȣ��
    if (x < 0 || y < 0 || x >= numCell || y >= numCell) {
        cout << x << "," << y << ": x�� y �� �� �ϳ��� ĭ�� ������ϴ�." << endl;
        return false;
    }
    if (board[x][y] != ' ') {
        cout << x << "," << y << ": �̹� ���� ���� �ֽ��ϴ�." << endl;
        return false;
    }
    return true;
}

bool checkWin(char currentPlayer) {
    // TODO 5: checkWin �Լ� ���� �� ȣ��
    // 5.1. ����/���� �� üũ�ϱ�
    for (int i = 0; i < numCell; i++) {
        if (board[i][0] == currentPlayer && board[i][1] == currentPlayer && board[i][2] == currentPlayer) {
            cout << "���η� ��� ���� �������ϴ�!!" << endl;
            return true;
        }
        if (board[0][i] == currentPlayer && board[1][i] == currentPlayer && board[2][i] == currentPlayer) {
            cout << "���η� ��� ���� �������ϴ�!!" << endl;
            return true;
        }
    }

    // 5.2. �밢���� üũ�ϱ�
    // ���� ������ ������ �Ʒ� �밢�� ���� üũ
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
        cout << "���� ������ ������ �Ʒ� �밢������ ��� ���� �������ϴ�. : ";
        return true;
    }

    // ������ ������ ���� �Ʒ� �밢�� ���� üũ
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
        cout << "������ ������ ���� �Ʒ� �밢������ ��� ���� �������ϴ�. : ";
        return true;
    }

    return false;
}

int main() {
    int k = 0; // ���� �������� üũ�ϱ� ���� ����

    //������ �ʱ�ȭ
    for (x = 0; x < numCell; x++) {
        for (y = 0; y < numCell; y++) {
            board[x][y] = ' ';
        }
    }
    // TODO 1: 3���� �����ϵ��� Ȯ�� (��: X O H, ���� ���� ����)
    while (true) {
        char currentUser = 'X'; // 3���� �÷��̾� �� �����ư��� ����
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
        cout << k % 3 + 1 << "�� ����(" << currentUser << ")�� �����Դϴ�. -> ";

        // ��ǥ �Է� �ޱ�
        cout << "(x, y) ��ǥ�� �Է��ϼ���: ";
        int x, y;
        cin >> x >> y;

        // �Է¹��� ��ǥ�� ��ȿ�� üũ
        if (!isValid(x, y)) {
            continue;
        }

        // �Է¹��� ��ǥ�� ���� ������ �� ����
        board[x][y] = currentUser;

        // ���� ���� �� ���
        // TODO 2: numCell ���ڿ� ���� ������ ���
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

        // �¸��� �����Ǿ����� �ش� �÷��̾ ����ϰ� ������ ����
        if (checkWin(currentUser)) {
            cout << k % 3 + 1 << "�� ����(" << currentUser << ")�� �¸��Դϴ�!" << endl;
            break;
        }

        // 7. ��� ĭ �� á���� üũ�ϱ�
        int checked = 0;
        for (int i = 0; i < numCell; i++) {
            for (int j = 0; j < numCell; j++) {
                if (board[i][j] == ' ') {
                    checked++;
                }
            }
        }
        if (checked == 0) {
            cout << "��� ĭ�� �� á���ϴ�. �����մϴ�." << endl;
            break;
        }

        k++;
    }

    return 0;
}
