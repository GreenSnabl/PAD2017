/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: dennis
 *
 * Created on January 17, 2018, 9:52 PM
 */

#include "Ticketverwaltung.h"
#include <iostream>

using std::cout;

int main(int argc, char** argv) {

    Ticketverwaltung test;
    cout << test.kaufeTickets("Alphakevin", "Jahrhunderthalle Frankfurt", 10, Stehplatz) << "\n";
    cout << test.kaufeTickets("Alphakevin", "Jahrhunderthalle Frankfurt", 4, Sitzplatz) << "\n";
    cout << test.kaufeTickets("Slayer", "Colossaal Aschaffenburg", 42, Sitzplatz) << "\n";
    cout << test.kaufeTickets("Esperanza Spalding", "Oettinger Villa Darmstadt", 20, Stehplatz) << "\n";
    cout << test.kaufeTickets("Esperanza Spalding", "Oettinger Villa Darmstadt", 35, Sitzplatz) << "\n";    cout << test.kaufeTickets("Esperanza Spalding", "Oettinger Villa Darmstadt", 1, Sitzplatz) << "\n";
    cout << test.kaufeTickets("Wolfgang Amadeus Mozart", "Oettinger Villa Darmstadt", 49, Sitzplatz) << "\n";
    cout << test.kaufeTickets("Wolfgang Amadeus Mozart", "Oettinger Villa Darmstadt", 19, Stehplatz) << "\n";
    
    test.printShow(0);
    test.printShow(1);
    test.printShow(2);
    test.printShow(3);
    
    
    
    return 0;
}

