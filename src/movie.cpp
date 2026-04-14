#include "../inc/movie.h"

movie::movie(std::string arg1, double arg2){
    tconst = arg1;
    averageRating=arg2;
}

movie::movie() {

}

double movie::getAverageRating () const{
    return averageRating;
}

void movie::setSecondSet(double arg1, int arg2) {
    averageRating=arg1;
    numVotes=arg2;
}

std::string print(){

}

std::string printBrief(){

}

bool operator < (const movie& a, const movie& b) {
    return a.getAverageRating() < b.getAverageRating();
}