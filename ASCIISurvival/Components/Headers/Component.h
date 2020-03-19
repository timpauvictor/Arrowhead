#pragma once
class Component
{
    private:
        int componentID;
        int ownerID;

    public:
        Component(int, int);
        Component(int);
        Component();

        int getComponentID();
        void setComponentID(int in_newID);

        int getOwnerID();
};

