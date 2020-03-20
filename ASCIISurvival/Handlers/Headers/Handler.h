#pragma once
#include <vector>

class Handler
{
    private:
        std::vector<int> matchingID;

    public:
        Handler();
        int findByIndex(int);
        void add(int);
};

