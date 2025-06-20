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

int main() {
    Time t;
    t.setHours(0).setMinutes(0); // Chain setters
    t.addMinutes(300000); // Add 5 hours (300 minutes)

    // Correct way to output time
    cout << t.getHours() << " hours and " << t.getMinutes
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    () << " minutes" << endl;
    // Or using toString()
    cout << "Time: " << t.toString() << endl;

    return 0;
}
