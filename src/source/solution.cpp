
#include "solution.h"
#include<iostream>
#include <stdlib.h>

double ex_1_16(double x1, double x2){ return std::abs(x2 - x1); }

int ex_2_16(int n){
    std::string strN = std::to_string(n);
    char tmp = strN[1];
    strN[1] = strN[2];
    strN[2] = tmp;
    return atoi(strN.c_str());
}