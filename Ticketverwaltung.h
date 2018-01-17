/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Ticketverwaltung.h
 * Author: dennis
 *
 * Created on January 17, 2018, 10:55 PM
 */

#ifndef TICKETVERWALTUNG_H
#define TICKETVERWALTUNG_H
#include "Show.h"
#include "Location.h"


class Ticketverwaltung {
public:
    Ticketverwaltung();
    ~Ticketverwaltung();
    bool kaufeTickets(std::string show, std::string location, int anzahl, Platzart art);
    void printShow(int i);
private:
    std::vector<Show> shows;
    std::vector<Location> locations;

};

#endif /* TICKETVERWALTUNG_H */

