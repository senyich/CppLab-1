#ifndef SOLUTION1_H
#define SOLUTION1_H

#include <cmath>

struct Circle {
    double V;
    double S;
    double L;
    double R;
};

struct Number {
    double Summa;
    double Difference;
    double Product;
    double Quotient;
};

struct Triangle {
    double a;
    double b;
    double c;
    double P;
};

struct Segment {
    double AB;
    double BC;
    double AC;
};

struct Rectangle {
    double P;
    double S;
};

class Solution1 {
public:
    double ex1(double a);
    double ex2(double a);
    double ex3(double a, double b);
    double ex4(double d);
    Circle ex5(double a);
    double ex6(double a, double b, double c);
    Circle ex7(double r);
    double ex8(double a, double b);
    double ex9(double a, double b);
    Number ex10(double a, double b);
    Number ex11(double a, double b);
    Triangle ex12(double a, double b);
    Circle ex14(double l);
    Circle ex15(double s);
    double ex16(double x1, double x2);
    Segment ex17(double a, double b, double c);
    double ex18(double a, double b, double c);
    Rectangle ex19(double x1, double y1, double x2, double y2);
    void ex20(double& a, double& b);
    void ex21(double& a, double& b, double& c);
    double ex22(double x);
    double ex23(double x);
    double ex24(double a);
    double ex25(double a);
    double ex26(double x);
};

#endif