#pragma once
#include <string>

/**
 * @brief wezel drzewa avl
 * @tparam typ danych
 */
template<class T>
struct Node {
    T key;
    std::string title;
    Node<T>* left;
    Node<T>* right;
    int height;

    Node(T k, const std::string& t)
    : key(k), title(t), left(nullptr), right(nullptr), height(1) {}
};



/**
 * @brief wezel drzewa BR
 * @tparam typ danych
 */
/*
struct RBTnode
{
  RBTnode * up;
  RBTnode * left;
  RBTnode * right;
  int key;
  char color;
  typ_danych data;
};
*/
template<class T>
struct BRnode {
    char color;
    T key;
    std::string title;
    Node<T>* left;
    Node<T>* right;
    int height;

    BRnode(T k, const std::string& t)
    : key(k), title(t), left(nullptr), right(nullptr), height(1) {}
};