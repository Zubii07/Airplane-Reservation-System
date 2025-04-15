#include "Crew.h"

void Crew::set_info1() {
    std::cout << "Enter the Name of the crew member: " << std::endl;
    std::cin.ignore();
    std::getline(std::cin, name);

    std::cout << "Enter the ID of the Crew Member: " << std::endl;
    std::cin.ignore();
    std::getline(std::cin, id);

    std::cout << "Enter the Mobile Number of the Crew Member: " << std::endl;
    std::cin >> mobile_number;

    std::cout << "Enter the Experience of the Crew Member : " << std::endl;
    std::cin >> exp;
    std::cout << "Please Select the Format (Months/Years) for experience : " << std::endl;
    std::cin >> format;

    std::cout << "Enter the Working Hours of the Crew Member: ";
    std::cin >> hours;

    std::cout << "Enter the availability hours of the crew member (from-to): ";
    std::cin >> avail_from >> avail_to;

    if (exp < 0 || hours < 0 || avail_from < 0 || avail_to < 0 || avail_from > 24 || avail_to > 24) {
        std::cerr << "Invalid input! Please enter valid values." << std::endl;
        exit(EXIT_FAILURE);
    }
}

void Crew::display_info1() {
    std::cout << ">>--------------------------------------------------<<" << std::endl;
    std::cout << "Name: " << name << std::endl;
    std::cout << "ID: " << id << std::endl;
    std::cout << "Mobile Number: " << mobile_number << std::endl;

    if (format == "months") {
        std::cout << "Experience: " << exp << " months" << std::endl;
    } else if (format == "years") {
        std::cout << "Experience: " << exp << " years" << std::endl;
    } else {
        std::cout << "Please enter the correct format!" << std::endl;
    }

    if (hours <= 12) {
        std::cout << "Working Hours: " << hours << " hours" << std::endl;
    } else {
        std::cout << "Invalid working hours" << std::endl;
    }

    std::cout << "Availability: " << avail_from << " to " << avail_to << " hours" << std::endl;
}
