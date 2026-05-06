#pragma once
#include <string>

#include "node.h"


/**
 * @brief drzewo avl, podczas towrzenia rotuje galezie gdy sie wypacza
 * @tparam typ danych
 */
template<class T>
class avlTree {
    Node<T>* root = nullptr;

    /**
     * 
     */
    int height(Node<T>* n) {
        return n ? n->height : 0;
    }

    /**
     * @brief sprawdz ktora strona przeaza
     * @return roznica height jesli isnieje
     */

    int balance(Node<T>* n) {
        return n ? height(n->left) - height(n->right) : 0;
    }

    /**
     * @brief zapisz max height z (left, right)
     */
    void updateHeight(Node<T>* n) {
        if (n)
            n->height = 1 + std::max(height(n->left), height(n->right));
    }

    /**
     * @brief obroc drzewo
     * @param x kopia lew
     * @param y kopia praw
     * @return nowe poddrzewo dobrze ustawione
     */
    Node<T>* rotateRight(Node<T>* y) {
        Node<T>* x = y->left;
        Node<T>* B = x->right;
        x->right = y;
        y->left  = B;
        updateHeight(y);
        updateHeight(x);
        return x;
    }

    /**
     * @brief analog rotRight
     */
    Node<T>* rotateLeft(Node<T>* x) {
        Node<T>* y = x->right;
        Node<T>* B = y->left;
        y->left  = x;
        x->right = B;
        updateHeight(x);
        updateHeight(y);
        return y;
    }

    /**
     * @brief wstaw galaz
     */
    Node<T>* insert(Node<T>* node, T key, const std::string& title) {
        if (!node) return new Node<T>(key, title);
        if      (key < node->key) node->left  = insert(node->left,  key, title);
        else if (key > node->key) node->right = insert(node->right, key, title);
        else return node;

        updateHeight(node);

        //dopuszczamy balans 0-1, dla wiecej obracamy, mozna zal 0-2, 0-3
        int b = balance(node);

        if (b > 1  && key < node->left->key)
            return rotateRight(node);

        if (b < -1 && key > node->right->key)
            return rotateLeft(node);

        if (b > 1  && key > node->left->key) {
            node->left = rotateLeft(node->left);
            return rotateRight(node);
        }

        if (b < -1 && key < node->right->key) {
            node->right = rotateRight(node->right);
            return rotateLeft(node);
        }

        return node;
    }

    /**
     * @brief znajdz title
     */
    std::string find(Node<T>* node, T key) {
        if (!node) 
            return "none";
        if      (key < node->key) 
            return find(node->left,  key);
        else if (key > node->key) 
            return find(node->right, key);
        else 
            return node->title;
    }

public:
    /**
     * @brief wstaw korzen poddrzewa
     */
    void insert(T key, const std::string& title) {
        root = insert(root, key, title);
    }

    std::string find(T key) {
        return find(root, key);
    }
};

/**
 * https://aisd-notatki.readthedocs.io/en/latest/trees/avl/
 */