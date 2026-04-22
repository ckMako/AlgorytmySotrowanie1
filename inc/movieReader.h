#pragma once

#include <chrono>

#include "movie.h"
// #include "algorytmySortowania.h"
#include "merge.h"
#include "quicksort.h"
#include "tree.h"

//iterowanie vector
// for (int x : v)        // kopia każdego elementu
// for (int& x : v)       // referencja, można modyfikować element
// for (const int& x : v) // referencja tylko do odczytu (najwydajniejsze)

//swap


/**
 * @brief kontener na filmy
 * @param vector wektor filmow
 */
class listaFilmow {
    /**
     * co boedzie szybsze
     * std::vector<int> sortujemy indeksy
     * std::vector<movie*> sortujemy wskaznik
     */

    std::vector<movie> ListaFilmow; //objekty
    std::vector<int> indeksy; //to srtujemy;
    // std::vector<movie*> ptrMovie //wiszace wskazniki przy relokacji(vector to dyn array)
    //dangling ptrs
    /*metoda setPonitersAgain --wolne */
    //metroda odsortuj-ułóż indeksy od 1 do size jeszcze raz.

    /*std::list - brak reserve */

    avlTree<long> titleTree;
    public:

    listaFilmow();

    /**
     * @brief construc czytajacy juz dane, pamiec na filmy nalezy allocowac
     * 1 raz - na poczatku(alloc wazy duzo, kod wolny) - definiuje ilosc filmow
     * @param string nazwa pliku(titles)
     * @param int ile filmow
     */
    listaFilmow(std::string,int);

    /**
     * @brief niepotrzebne
     */
    ~listaFilmow(){}

    /**
     * @brief pushbackelem
     * @param movie film do dodania do vec
     */
    void addToList(const movie&);

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

    void PrintBrief();

    void PrintTop10();

    void PrintLast10();

    /**
     * @brief dzieli string na elementy po tab
     * @param string linia z pliku
     */
    // std::vector<std::string> splitLine(const std::string& line);

    
    /**
     * @brief zwraca nierozdzielone linie z pliku(do znaku /n)
     * @param string nazwa file
     * @param ile ile iteracji z pliku
     * @param odKtorej od ktorej linii
     */
    // std::vector<std::string> ReadrawLines (std::string nazwa, int ile);

    /**
     * @brief dodaje z pliku
     * @param string nazwa pliku(titles)
     * @param int ile filmow
     */
    void addFromFile(std::string, int);


    /**
     * @brief top 3 w danej kat
     * @param int w jakiej kategorii
     */
    void top3Cat(const int, int typ);

    /**
     * @brief mysle ze nie trzeba, usuwanie ratingow bez tytulow nie ma sensu bo mozemy nie znalezc wszystkich tyt
     */
    void usunPuste();

    void addTitles();

    int getSize() {
        return ListaFilmow.size();
    }

    /**
     * @brief wyswietl mediane danych
     */
    void Mediana();

    void addTitles(std::string nazwa);
    
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

