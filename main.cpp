#include <iostream>
#include <fstream>
#include <windows.h> // For Sleep function

#include "User.cpp"
#include "Crew.cpp"
#include "Admin.cpp"
#include "Passenger.cpp"
#include "Employee.cpp"
#include "reservation.cpp"
#include "Ticket.cpp"
#include "airline.cpp"
#include "Payment.cpp"
#include "seat.h"
#include "premium.cpp"
#include "business.cpp"
#include "economy.cpp"


int main() {
    std::cout << ">>----------------------------------------------------------------------------------------------------------<<" << std::endl;
    std::cout << "                                         Flight Reservation System                                            " << std::endl;
    std::cout << ">>----------------------------------------------------------------------------------------------------------<<" << std::endl;

    User use;
    Crew crew2;
    Admin admin(&crew2);
    Passenger pass;
    Employee emp;
    reservation res;
    Ticket tic;

    bool exit = false;
    while (!exit) {
        int val1;
        std::cout << "\tEnter your choice :" << std::endl;
        std::cout << "\t1.Admin Section. " << std::endl;
        std::cout << "\t2.Passenger Section." << std::endl;
        std::cout << "\t3.Exit." << std::endl;
        std::cin >> val1;

        if (val1 == 1) {
            system("cls");
            std::cout << "\tEnter Your Choice :" << std::endl;
            std::cout << "\t1.Admin Registration ." << std::endl;
            std::cout << "\t2.Admin Login ." << std::endl;
            std::cout << "\tExit ." << std::endl;
            int val1;
            std::cin >> val1;
            if (val1 == 1) {
                use.Registration();
                Sleep(800);
                system("cls");
                admin.set_details();
                std::cout << ">>----------------------------------------------<<" << std::endl;
                admin.get_details();
            } else if (val1 == 2) {
                use.Login();
                Sleep(300);
                system("cls");
                emp.display_rank();
                admin.crew_info();
                emp.set_rank();
                admin.crew_display();
                Sleep(2000);
                emp.showRank();
               //Sleep(2000);
                emp.display_info1();
                 
                Sleep(2000);
            } else if (val1 == 3) {
                main();
            } else {
                std::cout << "\tError ! InValid Number ." << std::endl;
                Sleep(1000);
                main();
            }
        } else if (val1 == 2) {
            int val2;
            system("cls");
            std::cout << "\tEnter Your Choice : " << std::endl;
            std::cout << "\t1.Passenger Registration ." << std::endl;
            std::cout << "\t2.Passenger Login ." << std::endl;
            std::cout << "\t3.Exit ." << std::endl;
            std::cin >> val2;
            if (val2 == 1) {
                use.Registration();
                Sleep(800);
                system("cls");
                pass.set_details();
                std::cout << ">>-------------------------------------------------<<" << std::endl;
                pass.get_details();
            } else if (val2 == 2) {
                use.Login();
                Sleep(500);
                system("cls");
                airline airline1("Canada Airlines", "CA", 200);
                airline airline2("Dubai Airlines", "DUB", 150);
                airline::increment();
                airline::increment();
                airline1.airline1details();
                airline2.airline2details();
                Sleep(4000);
                system("cls");
                std::cout << "\tEnter Your Choice :" << std::endl;
                std::cout << "\t1.Book Canada Flight :" << std::endl;
                std::cout << "\t2.Book Dubai Flight :" << std::endl;
                std::cout << "\t3.Exit " << std::endl;
                int val5;
                std::cin >> val5;
                system("cls");
                std::cout << "\tEnter Your Choice :" << std::endl;
                std::cout << "\t1.Premium Class " << std::endl;
                std::cout << "\t2.Business Class " << std::endl;
                std::cout << "\t3.Economy Class " << std::endl;
                std::cout << "\t4. Exit " << std::endl;
                int choice;
                std::cin >> choice;
                system("cls");
                if (choice == 1) {
                    Premium prem;
                    prem.price();
                    Sleep(8000);
                    system("cls");
                    std::cout << "\tEnter Your Choice :" << std::endl;
                    std::cout << "\t1.Wanna Reserve Your Seat ." << std::endl;
                    std::cout << "\t2.Wanna Cancel Your Seat ." << std::endl;
                    std::cout << "\t3.Exit ." << std::endl;
                    int choice1;
                    std::cin >> choice1;
                    if (choice1 == 1) {
                        res.reserve();
                        Sleep(2000);
                        system("cls");
                        pass.PAY();
                        Sleep(1000);
                        system("cls");
                        std::cout << "\tEnter Your Choice :" << std::endl;
                        std::cout << "\t1.Wanna Print Ticket ." << std::endl;
                        std::cout << "\t2.Exit ." << std::endl;
                        int n1;
                        std::cin >> n1;
                        if (n1 == 1) {
                            if (val5 == 1) {
                                std::cout << ">>-------------------------------------------------------<<" << std::endl;
                                std::cout << "                    SKY AirLines" << std::endl;
                                std::cout << ">>--------------------------------------------------------<<" << std::endl;
                                tic.set_ticketno();
                                tic.get_ticketno();
                                pass.get_details();
                                tic.set_TicketDetails1();
                                tic.get_TicketDetails1();
                                std::cout << ">>---------------------ThankYou------------------------------<<" << std::endl;
                                Sleep(7000);
                                system("cls");
                            } else if (val5 == 2) {
                                std::cout << ">>-------------------------------------------------------<<" << std::endl;
                                std::cout << "                    SKY AirLines" << std::endl;
                                std::cout << ">>--------------------------------------------------------<<" << std::endl;
                                tic.set_ticketno();
                                tic.get_ticketno();
                                pass.get_details();
                                tic.set_TicketDetails2();
                                tic.get_TicketDetails2();
                                std::cout << ">>---------------------ThankYou------------------------------<<" << std::endl;
                                Sleep(7000);
                                system("cls");
                            } else {
                                std::cout << "\tError ! InValid Number Entered . " << std::endl;
                                Sleep(500);
                                system("cls");
                                main();
                            }
                        } else {
                            std::cout << "\tError ! InValid Number Entered . " << std::endl;
                            Sleep(500);
                            system("cls");
                            main();
                        }
                    } else if (choice1 == 2) {
                        res.cancel();
                        Sleep(1000);
                        system("cls");
                        main();
                    } else if (choice1 == 3) {
                        main();
                    } else {
                        std::cout << "\tError! InVaid Number Entered ." << std::endl;
                        Sleep(1000);
                        system("cls");
                        main();
                    }
                } else if (choice == 2) {
                    Business Bus;
                    Bus.price();
                    Sleep(8000);
                    system("cls");
                    std::cout << "\tEnter Your Choice :" << std::endl;
                    std::cout << "\t1.Wanna Reserve Your Seat ." << std::endl;
                    std::cout << "\t2.Wanna Cancel Your Seat ." << std::endl;
                    std::cout << "\t3.Exit ." << std::endl;
                    int choice2;
                    std::cin >> choice2;
                    system("cls");
                    if (choice2 == 1) {
                        res.reserve();
                        Sleep(2000);
                        system("cls");
                        pass.PAY();
                        Sleep(1000);
                        system("cls");
                        std::cout << "\tEnter Your Choice :" << std::endl;
                        std::cout << "\t1.Wanna Print Ticket ." << std::endl;
                        std::cout << "\t2.Exit ." << std::endl;
                        int n1;
                        std::cin >> n1;
                        if (n1 == 1) {
                            if (val5 == 1) {
                                std::cout << ">>-------------------------------------------------------<<" << std::endl;
                                std::cout << "                    SKY AirLines" << std::endl;
                                std::cout << ">>--------------------------------------------------------<<" << std::endl;
                                tic.set_ticketno();
                                tic.get_ticketno();
                                pass.get_details();
                                tic.set_TicketDetails1();
                                tic.get_TicketDetails1();
                                std::cout << ">>---------------------ThankYou------------------------------<<" << std::endl;
                                Sleep(7000);
                                system("cls");
                            } else if (val5 == 2) {
                                std::cout << ">>-------------------------------------------------------<<" << std::endl;
                                std::cout << "                    SKY AirLines" << std::endl;
                                std::cout << ">>--------------------------------------------------------<<" << std::endl;
                                tic.set_ticketno();
                                tic.get_ticketno();
                                pass.get_details();
                                tic.set_TicketDetails2();
                                tic.get_TicketDetails2();
                                std::cout << ">>---------------------ThankYou------------------------------<<" << std::endl;
                                Sleep(7000);
                                system("cls");
                            } else {
                                std::cout << "\tError ! InValid Number Entered . " << std::endl;
                                Sleep(500);
                                system("cls");
                                main();
                            }
                        } else {
                            std::cout << "\tError ! InValid Number Entered . " << std::endl;
                            Sleep(500);
                            system("cls");
                            main();
                        }
                    } else if (choice2 == 2) {
                        res.cancel();
                        Sleep(1000);
                        system("cls");
                        main();
                    } else if (choice2 == 3) {
                        main();
                    } else {
                        std::cout << "\tError! InVaid Number Entered ." << std::endl;
                        Sleep(800);
                        system("cls");
                        main();
                    }
                } else if (choice == 3) {
                    Economy econ;
                    econ.price();
                    Sleep(8000);
                    system("cls");
                    std::cout << "\tEnter Your Choice :" << std::endl;
                    std::cout << "\t1.Wanna Reserve Your Seat ." << std::endl;
                    std::cout << "\t2.Wanna Cancel Your Seat ." << std::endl;
                    std::cout << "\t3.Exit ." << std::endl;
                    int choice3;
                    std::cin >> choice3;
                    system("cls");
                    if (choice3 == 1) {
                        res.reserve();
                        Sleep(2000);
                        system("cls");
                        pass.PAY();
                        Sleep(1000);
                        system("cls");
                        std::cout << "\tEnter Your Choice :" << std::endl;
                        std::cout << "\t1.Wanna Print Ticket ." << std::endl;
                        std::cout << "\t2.Exit ." << std::endl;
                        int n1;
                        std::cin >> n1;
                        if (n1 == 1) {
                            if (val5 == 1) {
                                std::cout << ">>-------------------------------------------------------<<" << std::endl;
                                std::cout << "                    SKY AirLines" << std::endl;
                                std::cout << ">>--------------------------------------------------------<<" << std::endl;
                                tic.set_ticketno();
                                tic.get_ticketno();
                                pass.get_details();
                                tic.set_TicketDetails1();
                                tic.get_TicketDetails1();
                                std::cout << ">>---------------------ThankYou------------------------------<<" << std::endl;
                                Sleep(7000);
                                system("cls");
                            } else if (val5 == 2) {
                                std::cout << ">>-------------------------------------------------------<<" << std::endl;
                                std::cout << "                    SKY AirLines" << std::endl;
                                std::cout << ">>--------------------------------------------------------<<" << std::endl;
                                tic.set_ticketno();
                                tic.get_ticketno();
                                pass.get_details();
                                tic.set_TicketDetails2();
                                tic.get_TicketDetails2();
                                std::cout << ">>---------------------ThankYou------------------------------<<" << std::endl;
                                Sleep(7000);
                                system("cls");
                            } else {
                                std::cout << "\tError ! InValid Number Entered . " << std::endl;
                                Sleep(500);
                                system("cls");
                                main();
                            }
                        } else {
                            std::cout << "\tError ! InValid Number Entered . " << std::endl;
                            Sleep(500);
                            system("cls");
                            main();
                        }
                    } else if (choice3 == 2) {
                        res.cancel();
                        Sleep(1000);
                        system("cls");
                        main();
                    } else if (choice3 == 3) {
                        main();
                    } else {
                        std::cout << "\tError! InVaid Number Entered ." << std::endl;
                        Sleep(1000);
                        system("cls");
                        main();
                    }
                } else if (choice == 4) {
                    main();
                } else {
                    std::cout << "Error ! InValid Number Entered ." << std::endl;
                    Sleep(800);
                    system("cls");
                    main();
                }
            } else if (val2 == 3) {
                main();
            } else {
                std::cout << "\tError ! InValid Number ." << std::endl;
                Sleep(1000);
                main();
            }
        } else if (val1 == 3) {
            system("cls");
            exit = true;
            std::cout << "\tGood Luck" << std::endl;
            return 0;
            Sleep(1000);
        }
    }
    Sleep(3000);
    system("cls");
    main();
    return 0;
}
