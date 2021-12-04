//
// Created by igcbs on 04/12/2021.
//

#include "Plane.h"

Plane::Plane(string registration, string type, int capacity) {
    this->registration = registration;
    this->type = type;
    this->capacity = capacity;
};

void Plane::SetFlights(list<Flight> flights){
    this->flights = filghts;
};

void Plane::SetPastServices(Queue<PlaneService> pastServices){
    this->pastServices = pastServices;
};

void Plane::SetFutureServices(Queue<PlaneService> futureServices){
    this->futureServices = futureServices;
};

string Plane::GetRegistration() const{
    return registration;
};

string Plane::GetType() const{
    return type;
};

int Plane::GetCapacity() const{
    return capacity;
};

list<Flight> Plane::GetFlights() const{
    return flights;
};

queue<PlaneService> Plane::GetPastServices() const{
    return pastServices;
};

queue<PlaneService> Plane::GetFutureServices() const{
    return futureServices;
};

void Plane::UpdateRegistration(string registration){
    this->registration = registration;
};

void Plane::UpdateType(string type){
    this->type = type;
};

void Plane::UpdateCapacity(int capacity){
    this->capacity = capacity;
};

void Plane::AddFlight(Flight flight){
    this->flights.insert(this->flights.end(), flight);
};


void Plane::AddPastService(PlaneService service){
    this->pastServices.push(service);
};


void Plane::AddFutureService(PlaneService service){
    this->futureServices.push(service);
};
