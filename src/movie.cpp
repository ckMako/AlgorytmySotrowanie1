#include "../inc/movie.h"

movie::movie() {

}

double movie::getAverageRating () {
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