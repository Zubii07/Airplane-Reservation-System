#include "Ticket.h"

void Ticket::set_ticketno() {
    Ticket_no = " Ticket#6792 ";
    std::ofstream outfile("TicketNo.txt");
    outfile << Ticket_no;
    outfile.close();
}

void Ticket::get_ticketno() {
    std::ifstream infile("TicketNo.txt");
    std::string line1;
    while (getline(infile, line1)) {
        std::cout << "\t" << line1 << std::endl;
    }
    infile.close();
}

void Ticket::set_TicketDetails1() {
    Gate_no = 2;
    Date = " 15-05-2024 ";
    Dep_Time = " 7 : 00 AM ";
    Reach_Time = " 4 : 00 PM ";
    Dept_from = " Lahore ";
    Dept_to = " Canada ";
    seat_no = " Sr#456 ";
    std::ofstream outfile("Canada.txt");
    outfile << " Date Of FlY : " << Date << std::endl;
    outfile << " Departure Time : " << Dep_Time << std::endl;
    outfile << " Reaching Time : " << Reach_Time << std::endl;
    outfile << " Entry Gate No : " << Gate_no << std::endl;
    outfile << " Seat No : " << seat_no << std::endl;
    outfile << " Departure From : " << Dept_from << std::endl;
    outfile << " Departure to : " << Dept_to << std::endl;
    outfile.close();
}

void Ticket::get_TicketDetails1() {
    std::ifstream infile("Canada.txt");
    std::string line2;
    while (getline(infile, line2)) {
        std::cout << "\t" << line2 << std::endl;
    }
}

void Ticket::set_TicketDetails2() {
    Gate_no = 4;
    Date = " 15-05-2024 ";
    Dep_Time = " 6 : 00 AM ";
    Reach_Time = " 3 : 00 PM ";
    Dept_from = " Lahore ";
    Dept_to = " DUBAI ";
    seat_no = " Sr#478 ";
    std::ofstream outfile("Dubai.txt");
    outfile << " Date Of FlY : " << Date << std::endl;
    outfile << " Departure Time : " << Dep_Time << std::endl;
    outfile << " Reaching Time : " << Reach_Time << std::endl;
    outfile << " Entry Gate No : " << Gate_no << std::endl;
    outfile << " Seat No : " << seat_no << std::endl;
    outfile << " Departure From : " << Dept_from << std::endl;
    outfile << " Departure to : " << Dept_to << std::endl;
    outfile.close();
}

void Ticket::get_TicketDetails2() {
    std::ifstream infile("Dubai.txt");
    std::string line2;
    while (getline(infile, line2)) {
        std::cout << "\t" << line2 << std::endl;
    }
}
