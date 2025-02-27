#include <vector>
using namespace std;

class Solution {
public:
    bool isValid(vector<vector<char>>& board, int row, int col, char num) {
        // Check the row and column
        for (int i = 0; i < 9; i++) {
            if (board[row][i] == num || board[i][col] == num) return false;
        }
        
        // Check the 3x3 grid
        int startRow = (row / 3) * 3, startCol = (col / 3) * 3;
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                if (board[startRow + i][startCol + j] == num) return false;
            }
        }

        return true;
    }

    bool solve(vector<vector<char>>& board) {
        for (int row = 0; row < 9; row++) {
            for (int col = 0; col < 9; col++) {
                if (board[row][col] == '.') { // Empty cell
                    for (char num = '1'; num <= '9'; num++) {
                        if (isValid(board, row, col, num)) {
                            board[row][col] = num; // Place number
                            if (solve(board)) return true; // Continue solving
                            board[row][col] = '.'; // Backtrack if needed
                        }
                    }
                    return false; // No valid number found
                }
            }
        }
        return true; // Solved
    }

    void solveSudoku(vector<vector<char>>& board) {
        solve(board);
    }
};

