#include "./Headers/Handler.h"

Handler::Handler() 
{
    //do nothing
};

HandlerComponent Handler::findByIndex(int index) {
    return matchingElements.at(index);
};

void Handler::add(HandlerComponent in_handle)
{
    matchingElements.push_back(in_handle);
};
