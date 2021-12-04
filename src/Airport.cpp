//
// Created by igcbs on 04/12/2021.
//

#include "Airport.h"

Airport::Airport(BST<TTL> transportPlaces, list<Plane> planes){
    this->transportPlaces = transportPlaces;
    this->planes = planes;
};

BST<TTL> Airport::GetTransportPlaces(){
    return transportPlaces;
};

list<Plane> Airport::GetPlanes(){
    return planes;
};

void Airport::UpdateTransportPlaces(BST<TTL> transportPlaces){
    this->transportPlaces = transportPlaces;
};

void Airport::AddTransportPlace(TTL transportPlace){
    this->transportPlaces.insert(transportPlace);
};

void Airport::UpdatePlanes(list<Plane> planes){
    this->planes = planes;
};

void Airport::AddPlanes(Plane plane){
    this->planes.insert(planes.end(), plane);
};