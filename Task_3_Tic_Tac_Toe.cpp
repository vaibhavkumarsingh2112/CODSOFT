#include <iostream>
#include <vector>
#include <string>
using namespace std;


void displayBoard(const vector<vector<char>>& board) {
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            cout <<"    "<< board[i][j] << "    ";
          
        }
        cout << endl<<endl;
    }
}


bool checkWin(const vector<vector<char>>& board, char symbol) {
   
    for (int i = 0; i < 3; ++i) {
        if (board[i][0] == symbol && board[i][1] == symbol && board[i][2] == symbol) {
            return true;
        }
    }

   
    for (int i = 0; i < 3; ++i) {
        if (board[0][i] == symbol && board[1][i] == symbol && board[2][i] == symbol) {
            return true;
        }
    }

    
    if (board[0][0] == symbol && board[1][1] == symbol && board[2][2] == symbol) {
        return true;
    }

    if (board[0][2] == symbol && board[1][1] == symbol && board[2][0] == symbol) {
        return true;
    }

    return false;
}


bool isBoardFull(const vector<vector<char>>& board) {
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            if (board[i][j] == '_')
                return false;
        }
    }
    return true;
}

int main() {
    vector<vector<char>> board(3, vector<char>(3, '_')); 
    int row, col;
    string player1, player2;
  
    cout << "Enter Player 1 name: ";
    getline(cin, player1);
    cout << "Enter Player 2 name: ";
    getline(cin, player2);

    
    char currentPlayer = 'X';

    while (true) {

        cout << "\nCurrent board:\n\n\n";
        displayBoard(board);

        cout <<  (currentPlayer == 'X' ? player1 : player2) << "'s turn. Enter row and column (1-3) "
          <<"("<<currentPlayer<<"): ";
          
      
        cin >> row >> col;

     
        row--;
        col--;

       
        if (row < 0 || row >= 3 || col < 0 || col >= 3 || board[row][col] != '_' ) {
            cout << "Invalid Location\n";
            continue;
        }

       
        board[row][col] = currentPlayer;

        
        if (checkWin(board, currentPlayer)) {
       
            cout << "\nFinal board:\n";
            displayBoard(board);

            cout << "\nCongratulations! " << (currentPlayer == 'X' ? player1 : player2) << " wins!\n";
            break;
        }


        if (isBoardFull(board)) {
       
            cout << "\nFinal board:\n";
            displayBoard(board);

            cout << "\nThe game is a tie!\n";
            break;
        }


        currentPlayer = (currentPlayer == 'X' ? 'O' : 'X');
    }

    return 0;
}
