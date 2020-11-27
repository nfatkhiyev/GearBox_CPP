#include "Event.h"
#ifndef BLOCKINGEVENT_H
#define BLOCKINGEVENT_H

template <typename T>
class BlockingEvent : public Event<T>
{
private:
    Priority priority;
    T(*f)
    ();

public:
    //Blocking event takes a function with no args and a priority level
    BlockingEvent(Priority priority, T (*f)());
    T execute();
};

#endif
