#include "Component.h"

void Component::setComponentID(int in_id) {
	componentID = in_id;
}

int Component::getComponentID() {
	return componentID;
}

componentType Component::getComponentType() {
	return cType;
}

void Component::setComponentType(componentType in_cType) {
	cType = in_cType;
}