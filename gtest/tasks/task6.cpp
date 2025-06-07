#include <iostream>
#include <cstdlib>
#include <string>
#include <algorithm>
#include "task6.h"
#include <string>
#include <stack>
int solve_the_equation2(std::string s) {
    int number = 0; 
    int iteration_number = 0;
    int flag = 1;
    int FLAGBINOPERATOR = 1;
    std::stack<int> bracketFlags;   // Стек для хранения состояний флагов
    bracketFlags.push(1);           // Изначальное состояние
    for(int i=0;i<size(s)+1;i++){
        if (i == size(s)){
                number += iteration_number*flag*FLAGBINOPERATOR;
                break;
            }
        if (s[i] == '+' || s[i] == '-') {     // Обработка бинарных операторов + и -
            number += iteration_number*flag*FLAGBINOPERATOR;
            iteration_number=0;
            switch(s[i]){
                case '+':
                    flag = 1;
                    break;
                case '-':
                    flag = -1;
                    break;
            }
        }
        else if (s[i] == '('){        // Обработка открывающей скобки
            bracketFlags.push(FLAGBINOPERATOR*flag);
            if (i>0 && (s[i-1] == '-')){
                FLAGBINOPERATOR *= flag;
            }
            flag =1;
        }
        else if (s[i] == ')'){        // Обработка закрывающей скобки
            FLAGBINOPERATOR = bracketFlags.top();
            number += iteration_number*flag*FLAGBINOPERATOR;
            iteration_number=0;
            bracketFlags.pop();
        }  
        else if (isdigit(s[i])) {    // Обработка цифр
            iteration_number = iteration_number * 10 + (s[i] - '0');
        }
    }

    return number;
}
// Функция удаления пробелов из строки
std::string delete_whitespace(std::string s){
    for(int i = 0;i<size(s);i++){
        if (s[i] == ' '){
            s.erase(i,1);  // Удаляем пробелы из строки
        }
    }
    return s;
}