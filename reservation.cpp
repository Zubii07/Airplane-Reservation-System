#include "reservation.h"
#include <limits>

reservation::reservation() {
    date = "";
    time = "";
    availableseats = 0;
    totalseats = 0;
    priceperseat = 0.0;
    passengername = "";
    reservedseats = 0;
    newseats = 0;
}

void reservation::reserve() {
    availableseats = 10;
    std::cout << ".....WELCOME TO THE SEAT RESERVATION POINT......" << std::endl << std::endl << std::endl;
    std::cout << "Enter the number of seats you want to reserve: ";
    std::cin >> reservedseats;
    while (reservedseats <= 0 || reservedseats > availableseats) {
        std::cout << "Invalid input! Please enter a valid number of seats: ";
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        std::cin >> reservedseats;
    }
    std::cout << reservedseats << " Your Seat(s) have been reserved." << std::endl;
    availableseats -= reservedseats;
}

void reservation::start_off() {
    date = "18-04-2024";
    std::cout << "This flight is starting off at: " << date << std::endl;
}

void reservation::cancel() {
    int cancelled;
    std::cout << "Type 1 if you want to cancel the reservation or type any other key to skip this: ";
    std::cin >> cancelled;
    
    if (cancelled == 1) {
        if (passengers.find(passengername) != passengers.end()) {
            availableseats += passengers[passengername];
            passengers.erase(passengername);
            std::cout << "Reservation has been cancelled for passenger " << passengername << std::endl;
        } else {
            std::cout << "No reservation to cancel" << std::endl;
        }
    } else {
        std::cout << "You have not cancelled and your reservation is confirmed." << std::endl;
    }
}
