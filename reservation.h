#ifndef RESERVATION_H
#define RESERVATION_H

#include <iostream>
#include <map>

class reservation {
private:
    std::string date;
    std::string time;
    int availableseats;
    int totalseats;
    double priceperseat;
    std::string passengername;
    int reservedseats;
    int newseats;
    std::map<std::string, int> passengers;

public:
    reservation();
    void reserve();
    void start_off();
    void cancel();
};

#endif /* RESERVATION_H */
