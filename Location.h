/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Location.h
 * Author: dennis
 *
 * Created on January 17, 2018, 10:09 PM
 */

#ifndef LOCATION_H
#define LOCATION_H
#include <string>

class Location {
public:
    Location(std::string namee, int reihee, int sitzee, int plaetzee);
    ~Location();
    const int get_reihen() const;
    const int get_sitze() const;
    const int get_plaetze() const;
    const std::string& get_name() const;
private:
    std::string name;
    int reihen;
    int sitze;
    int plaetze;
};

#endif /* LOCATION_H */

