#include "movieReader.h"
#include <vector>

// std::vector <movie> filmy...


// vector<int> v;

// v.push_back(5);     // dodaj na koniec
// v.pop_back();       // usuń ostatni
// v.size();           // liczba elementów
// v.empty();          // czy pusty
// v[0];               // dostęp po indeksie (bez sprawdzania zakresu)
// v.at(0);            // dostęp po indeksie (z wyjątkiem gdy poza zakresem)
// v.clear();          // usuń wszystkie elementy
// v.front();          // pierwszy element
// v.back();           // ostatni element

listaFilmow::listaFilmow(){}

listaFilmow::listaFilmow(std::string,int){}

listaFilmow::~listaFilmow() {
    for (movie* m : ListaFilmow) {
        delete m;
    }
}

void listaFilmow::addToList(const movie& arg, int cntr) {
    for (int i = 0; i < cntr; i++) {
        ListaFilmow.push_back(new movie(arg));
    }
}

void listaFilmow::sortowanie(const int){}

void listaFilmow::testSortowania(const int arg){
    //start
    sortowanie(arg);
    //end
    std::cout<<"czas"<<std::endl;
}


void listaFilmow::Print() {
    for (const movie* m : ListaFilmow) {
        std::cout << m->print() << std::endl;
    }
}

void listaFilmow::PrintBrief() {
    for (const movie* m : ListaFilmow) {
        std::cout << m->printBrief() << std::endl;
    }
}

void listaFilmow::addFromFile(std::string nazwa, int ile){

}

void listaFilmow::top3Cat(const int){

}