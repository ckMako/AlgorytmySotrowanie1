#include "../inc/movie.h"

movie::movie(std::string arg1, double arg2){
    info[1]= arg1;
    averageRating=arg2;
}

movie::movie() {

}

/**
 * iniscjalizuje wartosci bez this(z claude, moja wersja miała this->pole=pole)
 */
movie::movie(std::string PASS[9]){
    for (int i = 0; i < 9; i++) {
        info[i] = PASS[i];
    }
}



double movie::getAverageRating () const{
    return averageRating;
}

void movie::setSecondSet(double arg1, int arg2) {
    averageRating=arg1;
    numVotes=arg2;
}

std::string movie::print()const{
    std::string ret="";
    for(int i=0; i<9; i++) {
        ret+=info[i];
        ret+=" ";
    }
    return ret;
}

std::string movie::printBrief()const{
    std::string ret="";
    ret+="tytul: ";
    ret+=this->info[tytul];
    ret+=" ocena: ";
    ret+=std::to_string(this->getAverageRating());//tutaj do zmiany
    return ret;
}

bool operator < (const movie& a, const movie& b) {
    return a.getAverageRating() < b.getAverageRating();
}