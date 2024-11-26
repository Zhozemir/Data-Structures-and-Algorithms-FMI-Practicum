#include<iostream>
#include <map>

class MyCalendar {

private:

    std::map<int, int> events;

public:

    MyCalendar() {}

    bool book(int startTime, int endTime) {

        auto next = events.lower_bound(startTime);

        if (next != events.end() && next->first < endTime)
            return false;
        

        if (next != events.begin() && (--next)->second > startTime)
            return false;
       
        events[startTime] = endTime;
        return true;

    }
};
