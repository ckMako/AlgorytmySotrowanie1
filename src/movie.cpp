#include "../inc/movie.h"

movie::movie(std::string arg1, double arg2){
    tconst = arg1;
    averageRating=arg2;
}

movie::movie() {

}

/**
 * iniscjalizuje wartosci bez this(z claude, moja wersja miała this->pole=pole)
 */
movie::movie(std::string tconst, std::string titleType,
             std::string primaryTitle, std::string originalTitle,
             bool isAdult, int startYear, std::string endYear,
             int runtimeMinutes, std::string genres)
    : tconst(tconst), titleType(titleType),
      primaryTitle(primaryTitle), originalTitle(originalTitle),
      isAdult(isAdult), startYear(startYear), endYear(endYear),
      runtimeMinutes(runtimeMinutes), genres(genres) {}



double movie::getAverageRating () const{
    return averageRating;
}

void movie::setSecondSet(double arg1, int arg2) {
    averageRating=arg1;
    numVotes=arg2;
}

std::string movie::print()const{
    return " ";
}

std::string movie::printBrief()const{
    std::string ret="";
    ret+="tytul: ";
    ret+=this->primaryTitle;
    ret+=" ocena: ";
    ret+=this->averageRating;//tutaj do zmiany
    return ret;
}

bool operator < (const movie& a, const movie& b) {
    return a.getAverageRating() < b.getAverageRating();
}