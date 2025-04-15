#ifndef CREW_H
#define CREW_H

#include <iostream>
#include <cstdlib> // For exit function

class Crew {
private:
    std::string name;
    std::string id;
    long double mobile_number;
    int exp;
    int hours;
    int avail_from;
    int avail_to;
    std::string format;

public:
    void set_info1();
    virtual void display_info1();
};

#endif /* CREW_H */
