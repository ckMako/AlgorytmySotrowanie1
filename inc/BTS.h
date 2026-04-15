#pragma once

#include "movie.h"

/**
 * @brief drzewo bts do dopasowywanai Raing do Title
 * /*ma byc zrownowazone 
 * 2 drzewo binarne do zapisu do pliku
 * ew mapa
 */

struct wezelBts {
    wezelBts* left, * right;
    int key;
};

void dfs_release(wezelBts * v)
{
  if(v)
  {
    // usuwamy lewe poddrzewo
    dfs_release(v->left);
    // usuwamy prawe poddrzewo
    dfs_release(v->right);
    // usuwamy sam węzeł
    delete v;
  }
}