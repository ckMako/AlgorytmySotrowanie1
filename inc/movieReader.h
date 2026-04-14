#pragma once


// #include <fstream>
// #include <sstream>
// #include <string>
// #include <vector>
// #include <iostream>

// #include<vector>

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
     * @brief usuwanie Alloc pamieci
     */
    ~listaFilmow();

    /**
     * @brief dodaje dane z pliku
     * @param movie film do dodania do vec
     * @param int ile kopii
     */
    void addToList(const movie&, int);

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

    void Print();

    void PrintBrief();


    /**
     * @brief top 3 w danej kat
     * @param int w jakiej kategorii
     */
    void top3Cat(const int);
    
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

