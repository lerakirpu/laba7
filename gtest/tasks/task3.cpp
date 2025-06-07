#include <iostream>
#include <cstdlib>
#include <string>
#include <algorithm>
#include "task3.h"

std::string solve_the_equation(std::string s) {
    int number = 0;
    int numberx = 0;
    int iteration_numberx_or_number = 0;
    int flag = 1;
    int REDflag = 1;
    bool digitsscan=false;
    for(int i=0;i<size(s)+1;i++){
        if (i == size(s)){
                number += iteration_numberx_or_number*flag*REDflag;
                break;
            }
        if (s[i] == '+' || s[i] == '-' || s[i] == '=') {    // Обрабатываем операторы +, -, =
            number += iteration_numberx_or_number*flag*REDflag;   // Добавляем накопленное число в соответствующую сумму
            iteration_numberx_or_number=0; // Сбрасываем временные переменные
            digitsscan = false;
            switch(s[i]){
                case '+':
                    flag = 1;
                    break;
                case '-':
                    flag = -1;
                    break;
                case '=':
                    REDflag = -1;
                    flag = 1;
                    break;
            }
        }
        // Обрабатываем переменную x
        else if (s[i] == 'x'){
            if (iteration_numberx_or_number==0 && !digitsscan){
                iteration_numberx_or_number = 1;
            }
            numberx+=iteration_numberx_or_number*flag*REDflag;
            // Сбрасываем временные переменные для следующего числа
            iteration_numberx_or_number = 0;
            digitsscan = false;
        }
        
        else{
            iteration_numberx_or_number = iteration_numberx_or_number*10+(s[i]-'0');
            digitsscan = true;
        }
    }
    if (numberx == 0 && number == 0){ // Все коэффициенты 0
        return "Infinite";
    }
    if (numberx == 0){ // Если коэффициент при x=0
        return "No";
    }
    return "x = " + std::to_string(-number / numberx);
}
