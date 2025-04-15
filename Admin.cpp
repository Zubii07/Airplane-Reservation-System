#include "Admin.h"

Admin::Admin(Crew* crew2) {
    crew1 = crew2;
}

void Admin::set_details() {
    std::cout << "\tEnter Your Admin ID here :" << std::endl;
    std::cin >> id;
    std::cout << "\tEnter Your Name : " << std::endl;
    std::cin >> name;
    std::getline(std::cin, name);
    std::cout << "\tEnter Your Phone Number here :" << std::endl;
    std::cin >> phone;
    std::ofstream outfile("Admin.txt", std::ios::trunc);
    outfile << " Admin ID : " << id << std::endl << " Phone No : " << phone << std::endl;
    outfile.close();
}

void Admin::get_details() {
    system("cls");
    std::ifstream infile("Admin.txt");
    std::string line3;
    while (getline(infile, line3)) {
        std::cout << line3 << std::endl;
    }
    infile.close();
}

void Admin::crew_info() {
    crew1->set_info1();
}

void Admin::crew_display() {
    crew1->display_info1();
}
