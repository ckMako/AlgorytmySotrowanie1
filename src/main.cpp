#include "movieReader.h"
#include "algorytmySortowania.h"

#define PRINTL(arg) std::cout<<arg<<std::endl

// void nextNonspace (std::string) {
//     for 
// }

int main() {


    auto start = std::chrono::high_resolution_clock::now();
    listaFilmow obj("C:/Users/macie/OneDrive/Pulpit/AlgoStruct/Algor/Proj/AlgorytmySotrowanie1/DATA/title.basics.tsv/data.tsv", 10000, 0);
    obj.addRatings();
    PRINTL(obj.getSize());
    obj.usunPuste();
    
    auto end = std::chrono::high_resolution_clock::now();
    auto czas = std::chrono::duration_cast<std::chrono::milliseconds>(end - start);
    std::cout<<czas.count()<<std::endl;

    PRINTL(obj.getSize());
    std::cout<<std::endl;
    obj.testSortowania(3);
    obj.PrintTop10();//10 ostatnich //bez sensu bez usunPuste
    std::cout<<std::endl;
    obj.PrintRealTop10();//10 perwszych
    // obj.top3Cat(4, 0);//bardzo wolne
}

/*
https://eduinf.waw.pl/inf/alg/001_search/0117.php
https://eduinf.waw.pl/inf/alg/001_search/0121.php
wczytywanie + sortowanie ok 2 min
*/