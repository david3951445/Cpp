#ifndef KNIGHT_H
#define KNIGHT_H

#include <iostream>
#include <vector>
#include <map>

using namespace std;

class knight {
public:
    knight() {}
    knight(int x_, int y_) : x(x_), y(y_) {}
    // ~knight() {}

    // coordinate on board
    int x{0};
    int y{0};

    // dir = 1 ~ 8, coorespondig to 8 kinds of move of knight)
    void move(int dir) {

    }

    void printCoord () {
        cout << "(" << x << ", " << y << ")" << endl;
    }

private:
    map<int, vector<int>> dir2xy;
};

#endif