#include "../inc/movie.h"

void movie::print() {
    std::cout<<num<<" "<<rating<<std::endl;
}

std::vector<movie> loadData (int liczba) {
    std::ifstream fileDat("../DATA/title.ratings.tsv/data.tsv");
    std::vector<movie> filmy;

    if (!fileDat.is_open()) {
        std::cout << "zyl plik";
        return filmy;
    }

    std::string linia;
    //skip 1st
    std::getline(fileDat, linia);

    // std::stringstream strStr(linia);
    std::string arg1, arg2;
    double arg2d;

    while (std::getline(fileDat, linia) && liczba) {
        std::stringstream strStr(linia);
        strStr>>arg1>>arg2;
        arg2d=stod(arg2);

        filmy.push_back(movie(arg1, arg2d));
        liczba--;
    }

}