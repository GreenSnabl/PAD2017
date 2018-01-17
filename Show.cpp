/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Show.cpp
 * Author: dennis
 * 
 * Created on January 17, 2018, 10:16 PM
 */

#include "Show.h"

using std::string;

Show::Show(string namee, double basispreiss, Location& locationn) : name{namee}, basispreis{basispreiss}, location{locationn}
{
    for(int i = 0; i < location.get_plaetze(); ++i)
    {
        Ticket t(i + 1 , 0 , 0, basispreis, Stehplatz);
        tickets.push_back(t);    
    }
    int temp_size = tickets.size();
    for(int i = 0; i < location.get_reihen(); ++i)
        for(int j = 1; j <= location.get_sitze(); ++j)
        {
            Ticket t(temp_size + j + i * location.get_sitze() ,i, j,basispreis * 1.5, Sitzplatz);
            tickets.push_back(t);        
        }
    
}

Show::~Show() {
}

void Show::zeigeFreieTickets(){
    for(int i = 0; i < tickets.size(); ++i)
    {
        if(!tickets[i].ist_verkauft()){
            tickets[i].print();
        }
    }

}

bool Show::kaufeTickets(int anzahl, Platzart art){
    int count = 0;
    for(int i = 0; i < tickets.size(); ++i)
    {
        if(art == tickets[i].get_platzart() && !tickets[i].ist_verkauft())
        {
            ++count;
        }
    }
    if (anzahl <= count)
    {
        for (int i = 0; i < tickets.size(); ++i)
        {
            if(art == tickets[i].get_platzart() && anzahl > 0 && !tickets[i].ist_verkauft())
            {
                tickets[i].verkaufeTicket();
                --anzahl;
            }        
        }
        return true;
    }
    return false;
}

const string& Show::get_location() const
{
    return location.get_name();
}

const std::string& Show::get_name() const 
{
    return name;
}