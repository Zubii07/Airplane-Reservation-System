#include "User.h"

void User::set_ID(std::string id) {
    LoginID = id;
}

std::string User::get_ID() {
    return LoginID;
}

void User::set_PW(std::string pw) {
    Password = pw;
}

std::string User::get_PW() {
    return Password;
}

void User::Registration() {
    system("cls");
    std::string id, pw;
    std::cout << "\tEnter your Login ID :" << std::endl;
    std::cin >> id;
    set_ID(id);
    start:
    std::cout << "Enter your Password :" << std::endl;
    std::cin >> pw;
    if (pw.length() == 4) {
        set_PW(pw);
    } else {
        std::cout << "Enter Minimum Characters !" << std::endl;
        goto start;
    }
    std::ofstream outfile("User1.txt", std::ios::app);
    if (!outfile) {
        std::cout << "\tFile cannot open !" << std::endl;
    } else {
        outfile << "\t" << get_ID() << " : " << get_PW() << std::endl << std::endl;
        std::cout << "\t Registered Successfully !" << std::endl;
    }
    outfile.close();
}

void User::Login() {
    system("cls");
    std::string id, pw;
    std::cout << "\tEnter your LoginID :" << std::endl;
    std::cin >> id;
    std::cout << "\tEnter your Password :" << std::endl;
    std::cin >> pw;
    std::ifstream infile("User1.txt");
    if (!infile) {
        std::cout << "\tError File cannot open !" << std::endl;
    } else {
        std::string line;
        bool found = false;
        while (getline(infile, line)) {
            std::stringstream ss;
            ss << line;
            std::string userID, userPW;
            char delimiter;
            ss >> userID >> delimiter >> userPW;

            if (id == userID && pw == userPW) {
                found = true;
                std::cout << "\tWelcome ! ";
            }
        }
        if (!found) {
            std::cout << "\tUser not found !" << std::endl;
            Sleep(1000);
            Login();
        }
    }
    Sleep(500);
}
