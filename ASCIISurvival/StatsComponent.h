#pragma once
#include "Component.h"
#include "CommonTypes.h"

struct statBlock
{
	int healthPoints; 
	int manaPoints; 
	str_i strengthAttr; 
	dex_i dexterityAttr;
	int_i intelligenceAttr;
};

class StatsComponent: public Component
{
private:
	statBlock stats;
public:
	StatsComponent::StatsComponent();
//	void StatsComponent::update() override;
	str_i StatsComponent::getStr();
	dex_i StatsComponent::getDex();
	int_i StatsComponent::getInt();
};
