#pragma once

#include <chrono>

#include "movie.h"
#include "algorytmySortowania.h"

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
     * @param int od ktorego
     */
    listaFilmow(std::string,int, int);

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

    void PrintTop10();

    void PrintRealTop10();

    /**
     * @brief dzieli string na elementy po tab
     * @param string linia z pliku
     */
    std::vector<std::string> splitLine(const std::string& line);

    
    /**
     * @brief zwraca nierozdzielone linie z pliku(do znaku /n)
     * @param string nazwa file
     * @param ile ile iteracji z pliku
     * @param odKtorej od ktorej linii
     */
    std::vector<std::string> ReadrawLines (std::string nazwa, int ile, int odKtorej);

    /**
     * @brief dodaje z pliku
     * @param string nazwa pliku(titles)
     * @param int ile filmow
     * @param int od ktorej linii
     */
    void addFromFile(std::string, int, int);


    /**
     * @brief top 3 w danej kat
     * @param int w jakiej kategorii
     */
    void top3Cat(const int);

    /**
     * @brief mysle ze nie trzeba, poniewaz podstawa jest titles, a puste wpisy sa tylko w ratings
     */
    void usunPuste(){}

    /**
     * @brief dodaje ratingi z ratings
     */
    void addRatings();
    
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

