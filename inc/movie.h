#pragma once

#include<iostream>
#include<fstream>
#include<string>
#include<vector>
#include <sstream> 

class movie {
    std::string num;
    // std::string title;
    double rating=0.0;

    /**
     * @param string l porzadkowa
     * @param double rating
     */
    public:
    movie(std::string argi, double argd) {
        num=argi;
        rating=argd;
    }

    void print();

    
};

/**
 * Pobierz dane o filmach
 * @param int ile linii z pliku
 * @return zwraca strukture z filmami
 */
std::vector<movie> loadData (int);

