#include "BlockingEvent.h"

template <typename T>
BlockingEvent<T>::BlockingEvent(Priority p, T (*f)()) : Event<T>(p, EventType::Blocking), priority(p), (*f)()(*f)
{
}

template <typename T>
T BlockingEvent<T>::execute()
{
    return (*f)();
}
