#include "Event.h"

template <typename T>
Priority Event<T>::getPriority()
{
    return priority;
}

template <typename T>
EventType Event<T>::getEventType()
{
    return type;
}
