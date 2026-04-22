#include "movieReader.h"
// #include "algorytmySortowania.h"

#define PRINTL(arg) std::cout<<arg<<std::endl

// void nextNonspace (std::string) {
//     for 
// }

int main(int argc, const char *argv[]) {
    int ilosc;
    std::cout<<"ile rek?"<<std::endl;
    std::cin>>ilosc;
    ilosc=10^ilosc;

    auto start = std::chrono::high_resolution_clock::now();
    listaFilmow obj("/home/vboxuser/Desktop/Alg_Struct/algorSort/DATA/title.ratings.tsv/data.tsv",
        1300000);
    obj.addTitles("/home/vboxuser/Desktop/Alg_Struct/algorSort/DATA/title.basics.tsv/data.tsv");
    obj.PrintBrief();

    
    auto end = std::chrono::high_resolution_clock::now();
    auto czas = std::chrono::duration_cast<std::chrono::milliseconds>(end - start);
    std::cout<<czas.count()<<std::endl;

}

/*
https://eduinf.waw.pl/inf/alg/001_search/0117.php
https://eduinf.waw.pl/inf/alg/001_search/0121.php
wczytywanie + sortowanie ok 2 min
*/