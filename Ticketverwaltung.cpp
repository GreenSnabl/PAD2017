/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Ticketverwaltung.cpp
 * Author: dennis
 * 
 * Created on January 17, 2018, 10:55 PM
 */

#include "Ticketverwaltung.h"

using std::string;

Ticketverwaltung::Ticketverwaltung() {
    Location loc1("Jahrhunderthalle Frankfurt", 0, 0, 20);
    Location loc2("Colossaal Aschaffenburg", 5, 10, 0);
    Location loc3("Oettinger Villa Darmstadt", 5, 10, 20);
    locations.push_back(loc1);
    locations.push_back(loc2);
    locations.push_back(loc3);
    
    Show show1("Alphakevin", 100, locations[0]);
    Show show2("Slayer", 20, locations[1]);
    Show show3("Esperanza Spalding", 15, locations[2]);
    Show show4("Wolfgang Amadeus Mozart", 35, locations[2]);

    shows.push_back(show1);
    shows.push_back(show2);
    shows.push_back(show3);
    shows.push_back(show4);
    
}

Ticketverwaltung::~Ticketverwaltung() {
}


bool Ticketverwaltung::kaufeTickets(string show, string location, int anzahl, Platzart art){
    for(int i = 0; i < shows.size(); ++i)
        if(shows[i].get_name() == show && shows[i].get_location() == location){
            return shows[i].kaufeTickets(anzahl, art);
        }
    return false;
}


void Ticketverwaltung::printShow(int i)
{
    shows[i].zeigeFreieTickets();
}