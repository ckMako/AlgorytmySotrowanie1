#include "../inc/bubbleSort.h"
#include "../inc/insert.h"


int main() {
    // std::vector<movie> nowy=loadData(100);
    std::vector<int> example;
    for (int i=0; i<100;i++) {
        example.push_back(rand()%100);
    }

    for (int i=0; i<example.size();i++) {
        std::cout<<example[i];
        if(i%10==9){
            std::cout<<std::endl;
        } else {std::cout<<" ";}
    }

    std::cout<<std::endl;

    bubbleSort(example);
    for (int i=0; i<example.size();i++) {
        std::cout<<example[i];
        if(i%10==9){
            std::cout<<std::endl;
        } else {std::cout<<" ";}
    }
}

/*
https://www.geeksforgeeks.org/cpp/cpp-program-for-string-to-double-conversion/
https://www.geeksforgeeks.org/cpp/bubble-sort-in-cpp/
https://www.geeksforgeeks.org/cpp/cpp-program-for-insertion-sort/
*/