/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Ticket.cpp
 * Author: dennis
 * 
 * Created on January 17, 2018, 9:53 PM
 */

#include "Ticket.h"
#include <iostream>

using std::cout; using std::string; using std::endl;

Ticket::Ticket(int num, int row, int seat, double price, Platzart type) : nummer{num}, reihe{row}, sitz{seat}, preis{price}, platzart{type}, verkauft{false} 
{
}
Ticket::~Ticket() {
}

void Ticket::verkaufeTicket() {
    verkauft = true;
}

void Ticket::print()
{
    string belegung;
    if (verkauft){
        belegung = "belegt";
    } else {
        belegung = "Noch frei";
    }
    cout << "Ticketnummer: "<<nummer << "\n"
         << "Platzart: " << platzart_to_string(platzart) << "\n"
         << "Preis: €" << preis << "\n"
         << "Status: " <<  belegung << "\n" << endl;

}

string platzart_to_string(Platzart platzart)
{
    if(platzart == Stehplatz) return "Stehplatz";
            return "Sitzplatz";
}

const bool Ticket::ist_verkauft() const
{
    return verkauft;
}

const Platzart Ticket::get_platzart() const
{
    return platzart;
}