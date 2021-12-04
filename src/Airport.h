//
// Created by Acer on 01/12/2021.
//

#include "Plane.h"
#include "TTL.h"



#ifndef PROJ1_AIRPORT_H
#define PROJ1_AIRPORT_H

class Airport{
private:
    BST<TTL> transportPlaces;
    List<Plane> planes;
public:
    Airport(BST<TTL> transportPlaces, List<Plane> planes);
    BST<TTL> GetTransportPlaces();
    List<Plane> GetPlanes();
    void UpdateTransportPlaces(BST<TTL> transportPlaces);
    void AddTransportPlace(TTL transportPlaces);
    void UpdateAirport(List<Plane> planes);
    void AddAirport(Plane planes);
};


#endif //PROJ1_AIRPORT_H
