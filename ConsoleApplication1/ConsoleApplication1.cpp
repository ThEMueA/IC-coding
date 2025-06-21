#include <iostream>
#include <string>
#include <windows.h>
#include <iostream>
#include <string>
#include <cstring>  
#include <array>
using namespace std;

class Time {
private:
    int hours;
    int minutes;

    // Private helper to normalize time (e.g., 25:70 becomes 02:10)
    void normalize() {
        hours += minutes / 60;
        minutes %= 60;
        hours %= 24;
    }

public:
    // Constructor to initialize time
    Time(int h = 0, int m = 0) : hours(h), minutes(m) {
        normalize();
    }

    void addMinutes(int m) {
        minutes += m;
        normalize();
    }

    // Getters
    int getHours() const { return hours; }
    int getMinutes() const { return minutes; }

    // Setters
    Time& setHours(int h) {
        hours = h;
        normalize();
        return *this;
    }

    Time& setMinutes(int m) {
        minutes = m;
        normalize();
        return *this;
    }

    // Method to display time as string
    string toString() const {
        return to_string(hours) + ":" +
            (minutes < 10 ? "0" : "") + to_string(minutes);
    }
};

int func(bool a) {
    return 0;
}

int main() {
    
    int  s = 1000 * 60 * 60;
    int b = 1000 * 60 * 60 * 10;
    int c = 1000 * 60 * 60 * 12;

    for (;;)
    {
        func(1);
        Sleep(s);
        func(0);
        Sleep(b);

        func(1);
        Sleep(s);
        func(0);
        Sleep(c);

    }
    return 0;
}
