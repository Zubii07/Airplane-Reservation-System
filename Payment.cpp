#include "Payment.h"

Payment::Payment() {
    // Constructor implementation
}

void Payment::method() {
    std::cout << "\t**Enter Your Payment Method :**" << std::endl;
    std::cout << "\t1. Bank Transfer " << std::endl;
    std::cout << "\t2. EasyPaisa or JazzCash " << std::endl;
    std::cout << "\t3. PayPal " << std::endl;
    int val;
    std::cin >> val;
    if (val == 1) {
        std::cout << "\t Select Your Bank :" << std::endl;
        std::cout << "\t1. HBL Bank " << std::endl;
        std::cout << "\t2. Bank Al Habib " << std::endl;
        std::cout << "\t3. Allied Bank " << std::endl;
        std::cout << "\t4. UBL Bank " << std::endl;
        std::cout << "\t5. Bank of Punjab " << std::endl;
        int val1;
        std::cin >> val1;
        if (val1 > 0 && val1 <= 12) {
            std::cout << "\tEnter Your 12 Digit Account Number :" << std::endl;
            std::cin >> bank_no;
            if (bank_no.length() == 12) {
                system("cls");
                std::cout << "\t**Processing ----**" << std::endl;
                Sleep(2000);
                system("cls");
                std::cout << "\tYour Payment Has Been Done !" << std::endl;
            } else {
                system("cls");
                std::cout << "\tError ! InValid Bank Account Number ." << std::endl;
            }
        } else {
            system("cls");
            std::cout << "\tError ! InValid Number " << std::endl;
        }
    } else if (val == 2) {
        std::cout << "\tEnter Your 11 Digit JazzCash or EasyPaisa Number :" << std::endl;
        std::cin >> phone_no;
        if (phone_no.length() == 11) {
            system("cls");
            std::cout << "\t** Processing ---- **" << std::endl;
            Sleep(2000);
            system("cls");
            std::cout << "\tYour Payment Has Been Done !" << std::endl;
        } else {
            system("cls");
            std::cout << "\tError ! Invalid Phone Number ." << std::endl;
        }

    } else if (val == 3) {
        std::cout << "\tEnter Your 11 Digit PayPal No. " << std::endl;
        std::cin >> paypal_no;
        if (paypal_no.length() == 11) {
            system("cls");
            std::cout << "\t**Processing ---- **" << std::endl;
            Sleep(2000);
            system("cls");
            std::cout << "\tYour Payment has been done !" << std::endl;
        } else {
            system("cls");
            std::cout << "\tError ! InValid PayPal Number ." << std::endl;
        }
    } else {
        system("cls");
        std::cout << "\tError ! Invalid Number " << std::endl;
    }
}
