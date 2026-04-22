#pragma once

#include<iostream>
#include<fstream>
#include<string>
#include<vector>
#include<sstream> 

    /**
     * @brief Doxygen comm
     * @param
     * @return
     */

enum infoFilm {
    tconst,
    typTytulu,
    tytul,
    orygTytul,
    isAdult, 
    startYear,
    endYear,
    runTime,
    genres
};

//tsv->tab separated values
//ss rozdzieli tez tytuly

/**
 * @brief klasa ma duzo pol, nalezy posortowac po ptr*
 */
class movie {

    //tconst-wart ID IMBD
    // std::string tconst;
    int tconst;
    double averageRating=0.0;
    int	numVotes=0;

    //dodawane pozniej
    std::string title="noT";
    int typ; //1-Doc, 2-Article

    public:

    /**
     * @brief konstruktor domyslnie uzywany
     * @param int l porzadkowa(tconst)
     * @param double rating
     * @param int l glosow
     */
    movie(int, double, int);
    movie();

    /**
     * @brief konstruktor bezposredni do wyebanja
     */
    movie(std::string PASS[9]);

    // ~movie();

    //gettery i settery

    //const na koncu dla return
    double getAverageRating () const;

    int getTconst () const;

    //gettery i settery

    /**
     * @brief do dolaczania Tytulu
     * @param string title
     */
    void setTitle(std::string);

    std::string print()const;
    std::string printBrief()const;

    void setKatArr();

    void setINTtconst();
    
};

//shift+tab--usuwanie wciecia dla kilku linii
/**
 * @brief overload < dla Ratingow
 * @param   movie 2 filmy do porównania
 * @return wynik < dla AverageRaing
 */


bool operator<(const movie& a, const movie& b);
bool operator>(const movie& a, const movie& b);
