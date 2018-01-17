/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Location.cpp
 * Author: dennis
 * 
 * Created on January 17, 2018, 10:09 PM
 */

#include "Location.h"
using std::string;


Location::Location(string namee, int reihee, int sitzee, int plaetzee) : name{namee}, reihen{reihee}, sitze {sitzee}, plaetze{plaetzee} 
{
}

Location::~Location() {
}

const int Location::get_reihen() const {return reihen;}
const int Location::get_sitze() const {return sitze;}
const int Location::get_plaetze() const {return plaetze;}
const std::string& Location::get_name() const {return name;}