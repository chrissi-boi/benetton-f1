#include <exception>
#include <string>
using namespace std;

#include "TransportMode.h"

TransportMode:: TransportMode(Location aDest, ContainerRoute* r,int aSpeed) {
	speed = aSpeed ;
	_destination = aDest ;
	_route = r ;
}

TransportMode::~TransportMode() {

}

void TransportMode::changeTransportMode(bool a){
	// change
}


bool TransportMode::getOnRoute() {
	return this->onRoute;
}

void TransportMode::setOnRoute(bool aOnRoute) {
	this->onRoute = aOnRoute;
}

ContainerRoute* TransportMode::getRoute() {
	return this->_route;
}

void TransportMode::setRoute(ContainerRoute* aRoute) {
	this->_route = aRoute;
}

Location TransportMode::getDestination() {
	return this->_destination;
}

void TransportMode::setDestination(Location aDestination) {
	this->_destination = aDestination;
}
