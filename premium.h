#ifndef PREMIUM_H
#define PREMIUM_H

#include "seat.h"
#include <iostream>

class Premium : public seat {
public:
    void price() override;
};

#endif /* PREMIUM_H */
