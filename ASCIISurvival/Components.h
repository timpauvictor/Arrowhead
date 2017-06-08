class Actor;

class Component
{
private:
	int cID;
	int bID;
public:
//	virtual void update();
};

class StatsComponent: Component
{
private:
	int strength;
	int dexterity;
	int intelligence;
public:
//	void update() override;
};
