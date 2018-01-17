/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Show.h
 * Author: dennis
 *
 * Created on January 17, 2018, 10:16 PM
 */

#ifndef SHOW_H
#define SHOW_H
#include "Ticket.h"
#include "Location.h"
#include <vector>


class Show {
public:
    Show(std::string namee, double basispreiss, Location& locationn);
    ~Show();
    void zeigeFreieTickets();
    bool kaufeTickets(int anzahl, Platzart art);
    const std::string& get_location() const;
    const std::string& get_name() const;
private:
    std::string name;
    double basispreis;
    std::vector<Ticket> tickets;
    Location& location;
};

#endif /* SHOW_H */

