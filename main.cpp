#include "Event.h"
#include "BlockingEvent.h"
#include <iostream>

int getX()
{
    return 10;
}

using namespace std;
int main()
{
    Event<int> *test = new BlockingEvent<int>(Priority::Standard, &getX);
    cout << test->execute();
    return 0;
}
