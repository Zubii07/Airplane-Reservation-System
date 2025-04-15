#ifndef AIRLINE_H
#define AIRLINE_H

#include <iostream>
#include <map>

class airline {
private:
    std::string name;
    std::string shortname;
    int fleetsize;

public:
    static int operatedflights;
    airline(std::string name, std::string shortname, int fleetsize);

    std::string getname();
    std::string getshortname();
    int getfleetsize();
    int getoperatedflights();
    void setname(std::string newname);
    void setshortname(std::string newshortname);
    void setfleetsize(int newfleetsize);
    void airline1details();
    void airline2details();
    static void increment();
};

#endif /* AIRLINE_H */
