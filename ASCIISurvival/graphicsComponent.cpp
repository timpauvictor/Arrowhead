#include "graphicsComponent.h"

graphicsComponent::graphicsComponent(int in_componentCount, char in_icon) {
	icon = in_icon;
	setComponentID(in_componentCount + 1);
	setComponentType(componentType::graphics);
}

char graphicsComponent::getIcon() {
	return icon;
}

bool graphicsComponent::tick() {
	//do nothing
}