#pragma once

#include<iostream>
#include<fstream>
#include<string>
#include<vector>
#include <sstream> 

    /**
     * @brief Doxygen comm
     * @param
     * @return
     */

#define PASS std::cout<<"TO DO"<<std::endl;

//tsv->tab separated values
//ss rozdzieli tez tytuly

/**
 * @brief klasa ma duzo pol, nalezy posortowac po wskaznikach
 */
class movie {

    std::string tconst;

    //zmienione tconst na int
    int INTtconst;

    std::string titleType; //limited amount of types enum?
    std::string primaryTitle;
    std::string	originalTitle;
    bool isAdult;
    int	startYear;
    std::string	endYear; //string bo moze byc /N

    //endYear jako int jesli mozliwe
    int endYearINT;

    int	runtimeMinutes;
    std::string	genres;
    bool kategorie[5];//przechowuje inf: czyDokument?, czyArticle?,
   
    //dodawane pozniej
    double averageRating;
    int	numVotes;


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
    movie(std::string tconst,
    std::string titleType,
    std::string primaryTitle,
    std::string	originalTitle,
    bool isAdult,
    int	startYear,
    std::string	endYear,
    int	runtimeMinutes,
    std::string	genres);

    // ~movie();

    //gettery i settery

    //const na koncu dla return
    double getAverageRating () const;

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

