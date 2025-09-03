#ifndef DBF3394F_923A_49AB_910B_C45C26D522ED
#define DBF3394F_923A_49AB_910B_C45C26D522ED

#include <iostream>
#include <cmath>

struct Circle {
    static double V;
    static double S;
    static double L;
};
struct Number {
    static double Summa;
    static double Difference;
    static double Product;
    static double Quotient;
};

class Solution{
public:
    Solution();
    double ex1(double a){
        return 4*a;
    }
    double ex2(double a){
        return pow(a,2);
    }
    double ex3(double a, double b){
        return 2*(a+b);
    }
    double ex4(double d){
        return M_PI*d;
    }
    Circle ex5(double a){
        Circle circle = Circle();
        circle.V = pow(a,3);
        circle.S = 6*pow(a,2);
        return circle;
    }
    double ex6(double a, double b, double c){
        return 2*((a*b)+(b*c)+(a*c));
    }
    Circle ex7(double r){
        Circle circle = Circle();
        circle.L = 2*M_PI*r;
        circle.S = M_PI*pow(r,2);
        return circle;
    }
    double ex8(double a, double b){
        return (a+b)/2;
    }
    double ex9(double a, double b){
        return sqrt(a*b);
    }
    Number ex10(double a, double b){
        Number num = Number();
        a = pow(a,2);
        b = pow(b,2);
        num.Summa = a+b;
        num.Difference = a-b;
        num.Product = a*b;
        num.Quotient = a/b;
        return num;
    }
    Number ex11(double a, double b){
        Number num = Number();
        a = std::abs(a);
        b = std::abs(b);
        num.Summa = a+b;
        num.Difference = a-b;
        num.Product = a*b;
        num.Quotient = a/b;
        return num;
    }

    
};

#endif /* DBF3394F_923A_49AB_910B_C45C26D522ED */
