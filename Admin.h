#ifndef ADMIN_H
#define ADMIN_H

#include "Passenger.h"
#include "Crew.h"
#include <iostream>
#include <fstream>

class Admin : public Passenger {
private:
    std::string id;
    std::string name;
    std::string phone;
    Crew* crew1;

public:
    Admin(Crew* crew2);
    void set_details();
    void get_details();
    void crew_info();
    void crew_display();
};

#endif /* ADMIN_H */
