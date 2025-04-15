#ifndef PASSENGER_H
#define PASSENGER_H

#include "User.h"
#include "Payment.h"
#include <fstream>
#include <iostream>

class Passenger : public User {
private:
    std::string id;
    std::string name;
    std::string address;
    std::string phone;
    std::string email;
    std::string age;
    Payment pay;

public:
    void set_details();
    void get_details();
    void PAY();
};

#endif /* PASSENGER_H */
