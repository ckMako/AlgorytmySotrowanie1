#include "movieReader.h"
#include "algorytmySortowania.h"

// void nextNonspace (std::string) {
//     for 
// }

int main() {

    listaFilmow obj("/home/vboxuser/Desktop/Alg_Struct/algorSort/DATA/title.basics.tsv/data.tsv", 10, 0);
    obj.addRatings();
    obj.Print();
}