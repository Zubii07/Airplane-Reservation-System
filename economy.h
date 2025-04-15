#ifndef ECONOMY_H
#define ECONOMY_H

#include "seat.h"
#include <iostream>

class Economy : public seat {
public:
    void price() override;
};

#endif /* ECONOMY_H */
