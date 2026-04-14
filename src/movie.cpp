#include "../inc/movie.h"

movie::movie(std::string arg1, double arg2){
    tconst = arg1;
    averageRating=arg2;
}

movie::movie() {

}

/**
 * iniscjalizuje wartosci bez this
 */
movie::movie(std::string tconst, int INTtconst, std::string titleType,
             std::string primaryTitle, std::string originalTitle,
             bool isAdult, int startYear, std::string endYear,
             int runtimeMinutes, std::string genres)
    : tconst(tconst), INTtconst(INTtconst), titleType(titleType),
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
    return " ";
}

bool operator < (const movie& a, const movie& b) {
    return a.getAverageRating() < b.getAverageRating();
}