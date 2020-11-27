#ifndef EVENT_H
#define EVENT_H

enum Priority
{
    Now,
    Urgent,
    Standard,
    Low,
    None,
};

enum EventType
{
    Async,
    Blocking,
    Timed,
};

template <typename T>
class Event
{
private:
    Priority priority;
    EventType type;

public:
    Event(Priority priority, EventType type);
    virtual T execute() = 0;
    Priority getPriority();
    EventType getEventType();
};

#endif
