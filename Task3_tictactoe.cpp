// Task 3 - Tic-Tac-Toe Game (2-Player)
// Author: Ketan Mahesh Joshi – CodSoft C++ Internship (June 2025)

#include <iostream>
using namespace std;

char board[3][3];
char currentPlayer = 'X';

// Function to initialize the game board
void resetBoard() {
    char cell = '1';
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            board[i][j] = cell++;
        }
    }
}

// Function to display the game board
void displayBoard() {
    cout << "\n";
    cout << " " << board[0][0] << " | " << board[0][1] << " | " << board[0][2] << "\n";
    cout << "---|---|---\n";
    cout << " " << board[1][0] << " | " << board[1][1] << " | " << board[1][2] << "\n";
    cout << "---|---|---\n";
    cout << " " << board[2][0] << " | " << board[2][1] << " | " << board[2][2] << "\n";
    cout << "\n";
}

// Function to make a move
bool makeMove(int position) {
    int row = (position - 1) / 3;
    int col = (position - 1) % 3;

    if (board[row][col] != 'X' && board[row][col] != 'O') {
        board[row][col] = currentPlayer;
        return true;
    } else {
        return false;
    }
}

// Function to check for win
bool checkWin() {
    // Rows, columns and diagonals
    for (int i = 0; i < 3; i++) {
        if ((board[i][0] == currentPlayer &&
             board[i][1] == currentPlayer &&
             board[i][2] == currentPlayer) ||

            (board[0][i] == currentPlayer &&
             board[1][i] == currentPlayer &&
             board[2][i] == currentPlayer)) {
            return true;
        }
    }

    if ((board[0][0] == currentPlayer &&
         board[1][1] == currentPlayer &&
         board[2][2] == currentPlayer) ||

        (board[0][2] == currentPlayer &&
         board[1][1] == currentPlayer &&
         board[2][0] == currentPlayer)) {
        return true;
    }

    return false;
}

// Function to check for draw
bool isDraw() {
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            if (board[i][j] != 'X' && board[i][j] != 'O')
                return false;
    return true;
}

// Function to switch the player
void switchPlayer() {
    currentPlayer = (currentPlayer == 'X') ? 'O' : 'X';
}

// Main game loop
int main() {
    int position;
    char playAgain;

    do {
        resetBoard();
        currentPlayer = 'X';
        bool gameEnded = false;

        cout << "===== Tic-Tac-Toe Game (2 Player) =====\n";

        while (!gameEnded) {
            displayBoard();
            cout << "Player " << currentPlayer << ", enter your move (1–9): ";
            cin >> position;

            if (position < 1 || position > 9) {
                cout << "Invalid position! Try again.\n";
                continue;
            }

            if (!makeMove(position)) {
                cout << "Cell already taken! Try another.\n";
                continue;
            }

            if (checkWin()) {
                displayBoard();
                cout << "🎉 Player " << currentPlayer << " wins!\n";
                gameEnded = true;
            } else if (isDraw()) {
                displayBoard();
                cout << "It's a draw!\n";
                gameEnded = true;
            } else {
                switchPlayer();
            }
        }

        cout << "Do you want to play again? (y/n): ";
        cin >> playAgain;

    } while (playAgain == 'y' || playAgain == 'Y');

    cout << "Thanks for playing!\n";
    return 0;
}
