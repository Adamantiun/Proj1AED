//
// Created by Acer on 01/12/2021.
//

#ifndef PROJ1_PLANE_H
#define PROJ1_PLANE_H

class Plane{
    private:
    String registration;
    String type;
    int capacity;
    List<Flight> flights;
    Queue<PlaneService> pastServices;
    Queue<PlaneService> futureServices;
public:
    Plane(String registration, String type, int capacity);
    void SetFlights(List<Flight> flights);
    void SetPastServices(Queue<PlaneService> pastServices);
    void SetFutureServices(Queue<PlaneService> futureServices);
    String GetRegistration() const;
    String GetType() const;
    int GetCapacity() const;
    List<Flight> GetFlights() const;
    Queue<PlaneService> GetPastServices() const;
    Queue<PlaneService> GetFutureServices() const;
    void UpdateRegistration(String registration);
    void UpdateType(String type);
    void UpdateCapacity(int capacity);
    void UpdateFlights(List<Flight> flights);
    void AddFlight(Flight flight);
    void UpdatePastServices(Queue<PlaneService> pastServices);
    void AddPastService(PlaneService service);
    void UpdateFutureServices(Queue<PlaneService> futureServices);
    void AddFutureService(PlaneService service);
};

#endif //PROJ1_PLANE_H
