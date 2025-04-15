#include "airline.h"

int airline::operatedflights = 0;

airline::airline(std::string name, std::string shortname, int fleetsize) {
    this->name = name;
    this->shortname = shortname;
    this->fleetsize = fleetsize;
}

std::string airline::getname() {
    return name;
}

std::string airline::getshortname() {
    return shortname;
}

int airline::getfleetsize() {
    return fleetsize;
}

int airline::getoperatedflights() {
    return operatedflights;
}

void airline::setname(std::string newname) {
    name = newname;
}

void airline::setshortname(std::string newshortname) {
    shortname = newshortname;
}

void airline::setfleetsize(int newfleetsize) {
    fleetsize = newfleetsize;
}

void airline::airline1details() {
    std::cout << "Airline name is: " << name << std::endl;
    std::cout << "Airline shortname is: " << shortname << std::endl;
    std::cout << "Airline fleetsize is: " << fleetsize << std::endl;
    std::cout << "Airline operated flights are: " << operatedflights << std::endl;
    std::cout << "CANADIAN AIRLINE AVAILABLE FLIGHTS ARE:" << std::endl;
    std::cout << "1. CA-345" << std::endl;
    std::cout << "\t12-03-2024...9:00PM...4 hours flight" << std::endl;
}

void airline::airline2details() {
    std::cout << "Airline name is: " << name << std::endl;
    std::cout << "Airline shortname is: " << shortname << std::endl;
    std::cout << "Airline fleetsize is: " << fleetsize << std::endl;
    std::cout << "Airline operated flights are: " << operatedflights << std::endl;
    std::cout << "DUBAI AIRLINES AVAILABLE FLIGHTS ARE:" << std::endl;
    std::cout << "1. DUB-386" << std::endl;
    std::cout << "\t11-01-2024...6:00AM...9 hours flight" << std::endl;
}

void airline::increment() {
    operatedflights++;
}
