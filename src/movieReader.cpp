#include "movieReader.h"
#include <vector>

// std::vector <movie> filmy...


listaFilmow::~listaFilmow() {
    for (int* p : dane) {
        delete p;
    }
}
