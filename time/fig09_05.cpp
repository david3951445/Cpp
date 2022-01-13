#include <iostream>
#include <iomanip>
#include "Time.h"
using namespace std;

int main() {
    Time t;
    t.setTime(13, 24, 61);
    t.printUniversal();
}