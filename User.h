#ifndef USER_H
#define USER_H

#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <windows.h>

class User {
private:
    std::string LoginID, Password;

public:
    void set_ID(std::string id);
    std::string get_ID();
    void set_PW(std::string pw);
    std::string get_PW();
    void Registration();
    void Login();
};

#endif /* USER_H */
