/* knight tour problrm
 * 
 *     - initial coordinate is fixed.
 *     - brust method 
 */

#include <iostream>
#include <vector>
#include <map>
#include <iomanip>
// #include "knight.h"

using namespace std;

// size of board
#define LEN_X 4
#define LEN_Y 5

// find max step board & max step with initial coordante (x, y)
void search(vector<vector<int>> &max_board, vector<vector<int>> board, int x, int y, int step, int &max_step) {
    const bool outBoundary = (x < 0 || x >= LEN_X) || (y < 0 || y >= LEN_Y);
    if (outBoundary || board[y][x]) {
        return;
    }   

    board[y][x] = step; // add current step
    const int xdir[8] = {1, 2, 2, 1, -1, -2, -2, -1};
    const int ydir[8] = {2, 1, -1, -2, -2, -1, 1, 2};
    for (int i = 0; i < 8; i++) {
        search(max_board, board, x + xdir[i], y + ydir[i], step + 1, max_step);
    }

    // store the board with max step
    if (step > max_step) {
        max_step = step;
        max_board = board;
    }
    
    board[y][x] = 0; // remove current step
}

void printBoard(vector<vector<int>> b) {
    cout << "board : " << endl;
    for (const auto i : b) {
        for (const auto j : i) {
            cout << setw(2) << j << " ";
        }
        cout << endl;
    }
    cout << endl;
}

int main() {
    vector<vector<int>> board(LEN_Y, vector<int> (LEN_X, 0));
    vector<vector<int>> feasibleBoard;
    int max = 0;

    search(feasibleBoard, board, 0, 0, 1, max); // start from (x, y) = (0, 0)

    cout << "max step : " << max << endl;
    printBoard(feasibleBoard);
}