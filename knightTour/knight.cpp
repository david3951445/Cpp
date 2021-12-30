
class knight {
public:
    knight() {}
    knight(int x_, int y_) : x(x_), y(y_) {}
    // ~knight() {}

    // coordinate on board
    int x{0};
    int y{0};

    void move(int dir) {
        x++;
    }

private:
    
};