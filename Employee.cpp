#include "Employee.h"

Employee::Employee() {
    // Constructor implementation
}

void Employee::display_rank() {
    std::cout << "----WELCOME TO THE EMPLOYEES PAY BOARD----" << std::endl;
    std::cout << "Please enter your rank from below :" << std::endl;
    std::cout << "1- Pilot " << std::endl;
    std::cout << "2- Co-Pilot " << std::endl;
    std::cout << "3- Flight Attendant " << std::endl;
    std::cout << "4- Air Traffic Controller " << std::endl;
    std::cout << "5- Catering Crew " << std::endl;
    std::cout << "6- Cleaning Crew " << std::endl;
    std::cout << "7- Security Officer " << std::endl;
    std::cout << ">>-------------------------------------<<" << std::endl;
}

void Employee::set_rank() {
    std::cout << "Enter Your Crew Member`s Rank :" << std::endl;
    std::cin >> rank;
}

void Employee::showRank() {
    std::cout << "Your Rank is : " << rank << std::endl;
    std::cout << ">>------------------------------------<<" << std::endl;
}

void Employee::display_info1() {
    if (rank == 1) {
        std::cout << "Your monthly salary is 300000/Rs." << std::endl;
    } else if (rank == 2) {
        std::cout << "Your monthly salary is 200000/Rs." << std::endl;
    } else if (rank == 3) {
        std::cout << "Your monthly salary is 150000/-Rs." << std::endl;
    } else if (rank == 4) {
        std::cout << "Your monthly salary is 150000/Rs." << std::endl;
    } else if (rank == 5) {
        std::cout << "Your monthly salary is 100000/Rs." << std::endl;
    } else if (rank == 6) {
        std::cout << "Your monthly salary is 80000/Rs." << std::endl;
    } else if (rank == 7) {
        std::cout << "Your monthly salary is 150000/Rs." << std::endl;
    } else {
        std::cout << "Sorry! You have entered the wrong detail " << std::endl;
        std::cout << "Please enter the correct Rank and try again " << std::endl;
    }
    Sleep(1000);
    system("cls");
    std::cout << ">>----------------------------------------------------<<" << std::endl;
    std::cout << "Enter your bank name : " << std::endl;
    std::cin >> bn1;
    std::cout << "Please enter your Account number : " << std::endl;
    std::cin >> accno;
    std::cout << "Please enter your account title (name) : " << std::endl;
    std::cin >> name;
    std::cout << "------------------------------------------" << std::endl;
    std::cout << "Your salary is deposited to your account with account number : " << accno << " and title name : " << name << "." << std::endl;
    std::cout << "Jazak Allah" << std::endl;
    Sleep(2000);
}
