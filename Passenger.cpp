#include "Passenger.h"

void Passenger::set_details() {
    std::cout << "\tEnter Your Passenger's ID here :" << std::endl;
    std::cin >> id;
    std::cout << "\tEnter Your Name : " << std::endl;
    std::cin >> name;
    std::cout << "\tEnter Your Address here :" << std::endl;
    std::cin.ignore();
    std::getline(std::cin, address);
    std::cout << "\tEnter Your Phone Number here :" << std::endl;
    std::cin >> phone;
    std::cout << "\tEnter Your Email here :" << std::endl;
    std::cin >> email;
    std::cout << "\tEnter Your Age :" << std::endl;
    std::cin >> age;
    std::ofstream outfile("Passenger.txt", std::ios::trunc);
    outfile << " Passenger ID : " << id << std::endl;
    outfile << " Passenger Name : " << name << std::endl;
    outfile << " Passenger Age : " << age << std::endl;
    outfile << " Passenger Address : " << address << std::endl;
    outfile << " Passenger Contact No : " << phone << std::endl;
    outfile << " Passenger Email : " << email << std::endl;
    outfile.close();
}

void Passenger::get_details() {
    std::ifstream infile("Passenger.txt");
    std::string line12;
    while (getline(infile, line12)) {
        std::cout << "\t" << line12 << std::endl;
    }
    infile.close();
}

void Passenger::PAY() {
    pay.method();
}
