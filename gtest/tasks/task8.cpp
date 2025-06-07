#include <iostream>
#include <vector>
#include <string>
#include "task8.h"

// Функция для поиска точек на границе сада 
std::vector<std::vector<int>> garden(std::vector<std::vector<int>> vec){
    int minx = vec[0][0];
    int maxx = vec[0][0];
    int miny = vec[0][1];
    int maxy = vec[0][1];

    // Находим границы сада
    for(int i =0;i<size(vec);i++){
        if (minx>(vec[i][0])){
            minx =(vec[i][0]);
        }
        if ((vec[i][0])>maxx){
            maxx =(vec[i][0]);
        }
        if (miny>(vec[i][1])){
            miny =(vec[i][1]);
        }
        if ((vec[i][1])>maxy){
            maxy =(vec[i][1]);
        }
    }
    // Вектор для хранения точек на границе
    std::vector<std::vector<int>> res;
    for(int i =0;i<size(vec);i++){
        if ((vec[i][0]) == minx || (vec[i][0]) == maxx || (vec[i][1]) == miny || (vec[i][1]) == maxy){
            res.push_back({vec[i][0], vec[i][1]});
        }
    }
    return res;
}