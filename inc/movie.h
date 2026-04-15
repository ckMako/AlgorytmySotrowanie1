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
 * @brief klasa ma duzo pol, nalezy posortowac po wskaznikach
 */
class movie {

    bool kategorie[5];//przechowuje inf: czyDokument?, czyArticle?,

    //0-tconst, 1-titleType, 2-primaryTitle, 3-originalTitle, 4-isAdult, 5-startYear, 6-endYear, 7-runtimeMinutes, 8-genres
    std::string info[9];
   
    //dodawane pozniej
    double averageRating=0.0;
    int	numVotes=0;


    public:

    /**
     * @param string l porzadkowa
     * @param double rating
     */
    movie(std::string, double);
    movie();

    /**
     * @brief konstruktor bezposredni
     */
    movie(std::string PASS[9]);

    // ~movie();

    //gettery i settery

    //const na koncu dla return
    double getAverageRating () const;

    std::string getNum () const;

    //gettery i settery

    /**
     * @brief do dolaczania danych z pliku ratings
     * @param double  rating
     * @param int number of votes
     */
    void setSecondSet(double, int);

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
bool operator < (const movie& a, const movie& b);

