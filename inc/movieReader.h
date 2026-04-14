#pragma once


#include <fstream>
#include <sstream>
#include <string>
#include <vector>
#include <iostream>

#include<vector>

#include "movie.h"

//iterowanie vector
// for (int x : v)        // kopia każdego elementu
// for (int& x : v)       // referencja, można modyfikować element
// for (const int& x : v) // referencja tylko do odczytu (najwydajniejsze)

//swap

class listaFilmow {
    std::vector<movie*> ListaFilmow;

    public:

    listaFilmow();

    /**
     * @brief construc czytajacy juz dane
     * @param string nazwa pliku(titles)
     * @param int ile filmow
     */
    listaFilmow(std::string,int);

    /**
     * @brief bedziemy dyn alokowac wiec musi byc
     */
    ~listaFilmow();

    /**
     * @brief dodaje dane z pliku
     * @param string nazwa pliku z filmami
     * @param int ile iteracji
     */
    void addToList(movie);

    /** 
     * @brief sortuje dane na liscie
     * @param int typ sortowania
     */
    void sortowanie(const int);

    /**
     * @brief mierzy czas sortowania
     * @param int typ sortowania
     */
    void testSortowania(const int);
    
};




    // std::ifstream plik("DATA/title.basics.tsv/data.tsv");
    // std::string linia;

    // int limiter=0;
    // while (std::getline(plik, linia) && limiter<1000) {        // czyta do \n
    //     std::istringstream ss(linia);
    //     std::string pole;

    //     while (std::getline(ss, pole, ' ')) { // czyta do \t
    //         std::cout << pole << " | ";
    //     }
    //     std::cout << "\n";

    //     limiter++;
    // }

