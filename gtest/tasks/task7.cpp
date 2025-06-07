#include <iostream>
#include <vector>
#include <bitset>
#include <string>
#include "task7.h"

// Функция для подсчета чисел от 0 до n
int returncounter(int n){
    int counter = 0;     // Счетчик подходящих чисел
    std::vector<int> v;  // Вектор для хранения чисел от 0 до n
    for(int i=0;i<n+1;i++){
        v.push_back(i);
    }
// Проверяем каждое число в векторе
    for (int x : v) {
        bool flag = true;
        std::bitset<8> bit(x);  // Преобразуем число в 8-битное двоичное представление
        for(int j = 0;j<7;j++){
            if (((x>>j)&3)==3){
                flag = false;
                break;
            }
        }
        if (flag == true){  // Если не найдено двух подряд идущих единиц
            counter++;
        }
    }
    return counter;
}