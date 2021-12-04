//
// Created by Acer on 01/12/2021.
//

#ifndef PROJ1_AIRPORT_H
#define PROJ1_AIRPORT_H

#include <list>
#include <string>
#include "Plane.h"
#include "TTL.h"
#include "BST.h"

using namespace std;

class Airport{
private:
    BST<TTL> transportPlaces;
    list<Plane> planes;
public:
    Airport(BST<TTL> transportPlaces, list<Plane> planes);
    BST<TTL> GetTransportPlaces();
    list<Plane> GetPlanes();
    void UpdateTransportPlaces(BST<TTL> transportPlaces);
    void AddTransportPlace(TTL transportPlace);
    void UpdatePlanes(list<Plane> planes);
    void AddPlanes(Plane plane);
};

#endif //PROJ1_AIRPORT_H
