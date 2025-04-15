#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include "Crew.h"
#include <iostream>
#include <windows.h> // For Sleep function

class Employee : public Crew {
private:
    std::string bn1;
    std::string accno;
    std::string name;
    int pay;
    int rank;

public:
    Employee();
    void display_rank();
    void set_rank();
    void showRank();
    void display_info1();
};

#endif /* EMPLOYEE_H */
