#include "solution1.h"


double Solution1::ex1(double a) { return 4 * a; }
double Solution1::ex2(double a) { return a * a; }
double Solution1::ex3(double a, double b) { return 2 * (a + b); }
double Solution1::ex4(double d) { return 3.14 * d; }

Circle Solution1::ex5(double a) {
    Circle circle;
    circle.V = a * a * a;
    circle.S = 6 * a * a;
    return circle;
}

double Solution1::ex6(double a, double b, double c) {
    return 2 * (a*b + b*c + a*c);
}

Circle Solution1::ex7(double r) {
    Circle circle;
    circle.L = 2 * 3.14 * r;
    circle.S = 3.14 * r * r;
    return circle;
}

double Solution1::ex8(double a, double b) { return (a + b) / 2; }
double Solution1::ex9(double a, double b) { return sqrt(a * b); }

Number Solution1::ex10(double a, double b) {
    Number num;
    double a2 = a * a;
    double b2 = b * b;
    num.Summa = a2 + b2;
    num.Difference = a2 - b2;
    num.Product = a2 * b2;
    num.Quotient = a2 / b2;
    return num;
}

Number Solution1::ex11(double a, double b) {
    Number num;
    a = abs(a);
    b = abs(b);
    num.Summa = a + b;
    num.Difference = a - b;
    num.Product = a * b;
    num.Quotient = a / b;
    return num;
}

Triangle Solution1::ex12(double a, double b) {
    Triangle triangle;
    triangle.c = sqrt(a*a + b*b);
    triangle.P = a + b + triangle.c;
    return triangle;
}

Circle Solution1::ex14(double l) {
    Circle circle;
    circle.R = l / (2 * 3.14);
    circle.S = 3.14 * circle.R * circle.R;
    return circle;
}

Circle Solution1::ex15(double s) {
    Circle circle;
    circle.R = sqrt(s / 3.14);
    circle.L = 2 * 3.14 * circle.R;
    return circle;
}

double Solution1::ex16(double x1, double x2) { return abs(x2 - x1); }

Segment Solution1::ex17(double a, double b, double c) {
    Segment segment;
    segment.AC = abs(a - c);
    segment.BC = abs(b - c);
    return segment;
}

double Solution1::ex18(double a, double b, double c) {
    Segment s = ex17(a, b, c);
    return s.AC * s.BC;
}

Rectangle Solution1::ex19(double x1, double y1, double x2, double y2) {
    Rectangle rect;
    double w = abs(x2 - x1);
    double h = abs(y2 - y1);
    rect.P = 2 * (w + h);
    rect.S = w * h;
    return rect;
}

void Solution1::ex20(double& a, double& b) { std::swap(a, b); }

void Solution1::ex21(double& a, double& b, double& c) {
    double temp = a;
    a = c;
    c = b;
    b = temp;
}

double Solution1::ex22(double x) {
    return 3*pow(x,6) - 6*pow(x,2) - 7;
}

double Solution1::ex23(double x) {
    return 4*pow(x-3,6) - 7*pow(x-3,3) + 2;
}

double Solution1::ex24(double a) { return a * 3.14 / 180; }
double Solution1::ex25(double a) { return a * 180 / 3.14; }

double Solution1::ex26(double x) {
    return 6*x*x - 3*sqrt(x) - 7;
}