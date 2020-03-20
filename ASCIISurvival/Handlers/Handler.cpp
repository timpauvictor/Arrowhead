#include "./Headers/Handler.h"

Handler::Handler() 
{
    //do nothing
};

int Handler::findByIndex(int index) {
    return matchingID.at(index);
};

void Handler::add(int in_ID)
{
    matchingID.push_back(in_ID);
};
