#include "Event.h"
#ifndef ASYNCEVENT_H
#define ASYNCEVENT_H

template <typename T>
class AsyncEvent : public Event
{
private:
    Priority priority;
    T (*f)
    ();

public:
    AsyncEvent(Priority priority, T (*f)());
    T execute();
};

#endif
