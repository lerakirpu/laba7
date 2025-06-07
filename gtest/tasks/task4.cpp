#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include "task4.h"

// Функция преобразования времени в формате "HH:MM" в минуты
std::vector<int> convert_minutes(std::vector<std::string> v){
    std::vector<int> minutes;
    for(int i=0;i<size(v);i++){
        int minutess = (((v[i][0]-'0')*10+ v[i][1]-'0')*60+((v[i][3])-'0')*10+ v[i][4]-'0');
        minutes.push_back(minutess);
    }
    std::sort(minutes.begin(),minutes.end());  // Сортируем временные отметки по возрастанию
    return minutes;
}
// Функция нахождения минимальной разницы между временными отметками
int minimum_difference(std::vector<int> minutes){
    int minimum_dif = 10000000;
    int dif = 0;   // Переменная для хранения текущей разницы
    for(int i = 0;i<size(minutes)-1;i++){
        dif = minutes[i+1]-minutes[i];
        if (dif>720){
            dif = 1440 - dif;
        }
        if(minimum_dif>dif){
            minimum_dif=dif;
        }
    }
// Дополнительно проверяем разницу между последним и первым элементом
    dif = minutes[size(minutes)-1]-minutes[0];
    if (dif>720){
            dif = 1440 - dif;
        }
    if(minimum_dif>dif){
            minimum_dif=dif;
        }
    return minimum_dif;
}