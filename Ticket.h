/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Ticket.h
 * Author: dennis
 *
 * Created on January 17, 2018, 9:53 PM
 */

#ifndef TICKET_H
#define TICKET_H
#include <string>

enum Platzart {Sitzplatz, Stehplatz};


class Ticket {
public:
    Ticket(int num, int row, int seat, double price, Platzart type);
    ~Ticket();
    void verkaufeTicket();
    void print();
    const bool ist_verkauft() const;
    const Platzart get_platzart() const;
private:
    int nummer;
    int reihe;
    int sitz;
    bool verkauft;
    double preis;
    Platzart platzart;
};

std::string platzart_to_string(Platzart platzart);

#endif /* TICKET_H */

