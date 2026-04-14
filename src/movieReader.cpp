#include "movieReader.h"
#include <vector>

// std::vector <movie> filmy...

listaFilmow::listaFilmow(){}

listaFilmow::listaFilmow(std::string,int){}

listaFilmow::~listaFilmow() {
    for (movie* m : ListaFilmow) {
        delete m;
    }
}

void listaFilmow::addToList(movie){}

void listaFilmow::sortowanie(const int){}

void listaFilmow::testSortowania(const int){}