#ifndef TIME_H
#define TIME_H

class Time {
public:
    Time();
    void setTime(int, int, int);
    void printUniversal();
private:
    int hour;
    int minute;
    int second;
};

// #include <iostream>
// #include <iomanip>
// using namespace std;
// Time::Time() {
//     hour = minute = second = 0;
// }

// void Time::setTime(int h, int m, int s) {
//     hour = (h >= 0 && h < 24) ? h : 0;
//     minute = (m >= 0 && m < 60) ? m : 0;
//     second = (s >= 0 && s < 60) ? s : 0;
// }

// void Time::printUniversal() {
//     cout << setfill('0') << setw(2) << hour << ":" << setw(2) << minute << ":" << setw(2) << second << endl;
// }

#endif