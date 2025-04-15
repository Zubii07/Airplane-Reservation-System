#ifndef BUSINESS_H
#define BUSINESS_H

#include "seat.h"
#include <iostream>

class Business : public seat {
public:
    void price() override;
};

#endif /* BUSINESS_H */
