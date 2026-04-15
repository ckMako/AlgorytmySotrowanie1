#include "movieReader.h"
#include "merge.h"

// std::vector <movie> filmy...


// vector<int> v;

// v.push_back(5);     // dodaj na koniec
// v.pop_back();       // usuń ostatni
// v.size();           // liczba elementów
// v.empty();          // czy pusty
// v[0];               // dostęp po indeksie (bez sprawdzania zakresu)
// v.at(0);            // dostęp po indeksie (z wyjątkiem gdy poza zakresem)
// v.clear();          // usuń wszystkie elementy
// v.front();          // pierwszy element
// v.back();           // ostatni element

listaFilmow::listaFilmow(){}

listaFilmow::listaFilmow(std::string plik, int ile, int odktorego){
    this->addFromFile(plik, ile, odktorego);
}

listaFilmow::~listaFilmow() {
    for (movie* m : ListaFilmow) {
        delete m;
    }
}

void listaFilmow::addToList(const movie& arg, int cntr) {
    for (int i = 0; i < cntr; i++) {
        ListaFilmow.push_back(new movie(arg));
    }
}

void listaFilmow::sortowanie(const int arg){
    switch (arg)
    {
    case 0:
        bubbleSort<movie*>(ListaFilmow);
        break;

    case 1:
        insertionSort<movie*>(ListaFilmow);
        break;

    case 2:
        mergeSort(ListaFilmow);
        break;
    
    default:
        bubbleSort<movie*>(ListaFilmow);
        break;
    }
    
}


void listaFilmow::testSortowania(const int arg) {
    auto start = std::chrono::high_resolution_clock::now();
    
    sortowanie(arg);
    
    auto end = std::chrono::high_resolution_clock::now();
    auto czas = std::chrono::duration_cast<std::chrono::milliseconds>(end - start);
    
    std::cout << "Czas: " << czas.count() << " ms" << std::endl;
}


void listaFilmow::Print() {
    for (const movie* m : ListaFilmow) {
        std::cout <<m->getAverageRating()<<" "<< m->print() << std::endl;
    }
}

void listaFilmow::PrintBrief() {
    for (const movie* m : ListaFilmow) {
        std::cout << m->printBrief() << std::endl;
    }
}

void listaFilmow::PrintTop10() {
    for(int i=0; i<10; i++)
        std::cout << this->ListaFilmow[i]->printBrief() << std::endl;
}


std::vector<std::string> listaFilmow::splitLine(const std::string& line) {
    std::vector<std::string> result;
    std::stringstream ss(line);
    std::string item;

    while (std::getline(ss, item, '\t')) {
        result.push_back(item);
    }

    return result;
}

std::vector<std::string> listaFilmow::ReadrawLines (std::string nazwa, int ile, int odKtorej) {
    std::ifstream file(nazwa); //DATA/title.basics.tsv/data.tsv

    if (!file.is_open()) {
        throw std::runtime_error("Nie mozna otworzyc pliku");
    }

    std::vector<std::string> ret;
    std::string line;
    int counter=0;

    //pomin header
    std::getline(file, line);

    //pomin linie
    for(int i=0; i<odKtorej; i++)
        std::getline(file, line);

    while (std::getline(file, line) && (counter<ile)) {
        ret.push_back(line);
        counter++;
    } 

    return ret;
}


void listaFilmow::addFromFile(std::string nazwa, int ile, int odKtorej){
    std::vector<std::string> linje=this->ReadrawLines(nazwa, ile, odKtorej);

    //pass args
    std::vector<std::string> tmp;
    std::string passArg[9];

    for (std::string i : linje) {
        //split tylko aktualnej linii
        tmp=splitLine(i);

        //kopia tmp do tablicy
        for (int i = 0; i < 9 && i < tmp.size(); i++) {
            passArg[i] = tmp[i];
        }  
        //newobj
        this->addToList(movie(passArg), 1);
    }
}

void listaFilmow::top3Cat(const int){

}

void listaFilmow::PrintRealTop10() {
    for(int i=0; i<10; i++)
        std::cout << this->ListaFilmow[ListaFilmow.size()-i-1]->printBrief() << std::endl;
}


void listaFilmow::addRatings() {
    std::vector<std::string> tmp = this->ReadrawLines("/home/vboxuser/Desktop/Alg_Struct/algorSort/DATA/title.ratings.tsv/data.tsv", ListaFilmow.size(), 0);
    std::vector<std::string> passArg;
    
    double passRating;
    int passVotes;

    for(std::string j : tmp) {
        passArg=this->splitLine(j);
        for (movie* i : ListaFilmow) {
            if(i->getNum()==passArg[0]) {
                passRating=std::stod(passArg[1]);
                passVotes=std::stoi(passArg[2]);
                i->setSecondSet(passRating, passVotes);
            }
        }
    }

}