//
// Created by Acer on 01/12/2021.
//

#ifndef PROJ1_PLANE_H
#define PROJ1_PLANE_H

#include <list>
#include <string>
#include <queue>
#include "Flight.h"
#include "PlaneService.h"

using namespace std;

class Plane{
private:
    string registration;
    string type;
    int capacity;
    list<Flight> flights;
    queue<PlaneService> pastServices;
    queue<PlaneService> futureServices;
public:
    Plane(string registration, string type, int capacity);
    void SetFlights(list<Flight> flights);
    void SetPastServices(Queue<PlaneService> pastServices);
    void SetFutureServices(Queue<PlaneService> futureServices);
    string GetRegistration() const;
    string GetType() const;
    int GetCapacity() const;
    list<Flight> GetFlights() const;
    queue<PlaneService> GetPastServices() const;
    queue<PlaneService> GetFutureServices() const;
    void UpdateRegistration(string registration);
    void UpdateType(string type);
    void UpdateCapacity(int capacity);
    void AddFlight(Flight flight);
    void AddPastService(PlaneService service);
    void AddFutureService(PlaneService service);
};

#endif //PROJ1_PLANE_H
