#include "Event.h"
#ifndef TIMEDEVENT_H
#define TIMEDEVENT_H

template <typename T>
class TimedEvent : public Event
{
private:
    Priority priority;
    double frequency;
    int cycles;
    T(*f)
    ();

public:
    TimedEvent(Priority priority, double frequency, int cycles, T (*f)());
    T execute();
};
#endif
