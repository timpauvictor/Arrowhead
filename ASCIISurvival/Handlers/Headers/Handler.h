#pragma once
#include <vector>


struct HandlerComponent { //each handler component has an entityID, and two components to match the handler
    int entityID;
    int firstComponentID;
    int secondComponentID;
};

class Handler
// A handler is a simple class that holds a vector of ints
//these ints represent entityIDs that have both required elements
{
    private:
        std::vector<HandlerComponent> matchingElements;

    public:
        Handler();
        HandlerComponent findByIndex(int);
        void add(HandlerComponent);
};