#include "movieReader.h"
#include "algorytmySortowania.h"

// void nextNonspace (std::string) {
//     for 
// }

int main() {

    listaFilmow obj("/home/vboxuser/Desktop/Alg_Struct/algorSort/DATA/title.basics.tsv/data.tsv", 1000, 0);
    obj.addRatings();
    obj.usunPuste();
    obj.PrintTop10();
    std::cout<<std::endl;
    obj.testSortowania(3);
    obj.PrintTop10();//10 ostatnich //bez sensu bez usunPuste
    std::cout<<std::endl;
    obj.PrintRealTop10();//10 perwszych
}