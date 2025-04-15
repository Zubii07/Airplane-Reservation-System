#ifndef TICKET_H
#define TICKET_H

#include <iostream>
#include <fstream>

class Ticket {
private:
    std::string Ticket_no;
    int Gate_no;
    std::string Date;
    std::string Dep_Time;
    std::string Reach_Time;
    std::string Dept_from;
    std::string seat_no;
    std::string Dept_to;

public:
    void set_ticketno();
    void get_ticketno();
    void set_TicketDetails1();
    void get_TicketDetails1();
    void set_TicketDetails2();
    void get_TicketDetails2();
};

#endif /* TICKET_H */
