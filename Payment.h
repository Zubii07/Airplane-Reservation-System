#ifndef PAYMENT_H
#define PAYMENT_H

#include <iostream>
#include <windows.h> // For Sleep function

class Payment {
private:
    std::string bank_no;
    std::string phone_no;
    std::string paypal_no;

public:
    Payment();
    void method();
};

#endif /* PAYMENT_H */
