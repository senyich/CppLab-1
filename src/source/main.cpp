#include <iostream>
#include <string>
#include <iomanip>
#include "solution1.h"

using namespace std;

void printCircle(const Circle& c, const string& title = "") {
    if (!title.empty()) cout << title << endl;
    cout << "  Объем: " << c.V << endl;
    cout << "  Площадь поверхности: " << c.S << endl;
    cout << "  Длина окружности: " << c.L << endl;
    cout << "  Радиус: " << c.R << endl;
    cout << endl;
}

void printNumber(const Number& n, const string& title = "") {
    if (!title.empty()) cout << title << endl;
    cout << "  Сумма: " << n.Summa << endl;
    cout << "  Разность: " << n.Difference << endl;
    cout << "  Произведение: " << n.Product << endl;
    cout << "  Частное: " << n.Quotient << endl;
    cout << endl;
}

void printTriangle(const Triangle& t, const string& title = "") {
    if (!title.empty()) cout << title << endl;
    cout << "  Катет a: " << t.a << endl;
    cout << "  Катет b: " << t.b << endl;
    cout << "  Гипотенуза c: " << t.c << endl;
    cout << "  Периметр P: " << t.P << endl;
    cout << endl;
}

void printSegment(const Segment& s, const string& title = "") {
    if (!title.empty()) cout << title << endl;
    cout << "  Длина AC: " << s.AC << endl;
    cout << "  Длина BC: " << s.BC << endl;
    cout << "  Длина AB: " << s.AB << endl;
    cout << endl;
}

void printRectangle(const Rectangle& r, const string& title = "") {
    if (!title.empty()) cout << title << endl;
    cout << "  Периметр: " << r.P << endl;
    cout << "  Площадь: " << r.S << endl;
    cout << endl;
}

int main() {
    Solution1 sol;
    
    cout << "=== РЕШЕНИЕ ЗАДАЧ ===" << endl << endl;
    
    cout << "1. Дана сторона квадрата a = 5. Найти квадрат его периметра P = 4·a" << endl;
    cout << "   Результат: " << sol.ex1(5) << endl << endl;
    
    cout << "2. Дана сторона квадрата a = 5. Найти его площадь S = a²" << endl;
    cout << "   Результат: " << sol.ex2(5) << endl << endl;
    
    cout << "3. Даны стороны прямоугольника a = 3, b = 4. Найти периметр P = 2·(a + b)" << endl;
    cout << "   Результат: " << sol.ex3(3, 4) << endl << endl;
    
    cout << "4. Дан диаметр окружности d = 10. Найти ее длину L = π·d" << endl;
    cout << "   Результат: " << sol.ex4(10) << endl << endl;
    
    cout << "5. Дана длина ребра куба a = 3. Найти объем и площадь поверхности" << endl;
    printCircle(sol.ex5(3), "   Результат:");
    
    cout << "6. Даны длины ребер a=2, b=3, c=4 прямоугольного параллелепипеда. Найти площадь поверхности" << endl;
    cout << "   Результат: " << sol.ex6(2, 3, 4) << endl << endl;
    
    cout << "7. Дана длина окружности R = 5. Найти длину и площадь круга" << endl;
    printCircle(sol.ex7(5), "   Результат:");
    
    cout << "8. Даны два числа a=4, b=6. Найти их среднее арифметическое" << endl;
    cout << "   Результат: " << sol.ex8(4, 6) << endl << endl;
    
    cout << "9. Даны два неотрицательных числа a=4, b=9. Найти их среднее геометрическое" << endl;
    cout << "   Результат: " << sol.ex9(4, 9) << endl << endl;
    
    cout << "10. Даны два ненулевых числа a=2, b=3. Найти операции с их квадратами" << endl;
    printNumber(sol.ex10(2, 3), "   Результат:");
    
    cout << "11. Даны два ненулевых числа a=-2, b=3. Найти операции с их модулями" << endl;
    printNumber(sol.ex11(-2, 3), "   Результат:");
    
    cout << "12. Даны катеты прямоугольного треугольника a=3, b=4. Найти гипотенузу и периметр" << endl;
    printTriangle(sol.ex12(3, 4), "   Результат:");
    
    cout << "14. Дана длина окружности L=31.4. Найти радиус и площадь круга" << endl;
    printCircle(sol.ex14(31.4), "   Результат:");
    
    cout << "15. Дана площадь круга S=78.5. Найти диаметр и длину окружности" << endl;
    Circle circle15 = sol.ex15(78.5);
    cout << "   Результат:" << endl;
    cout << "   Диаметр D: " << 2 * circle15.R << endl;
    cout << "   Длина L: " << circle15.L << endl << endl;
    
    cout << "16. Даны координаты x1=3, x2=7. Найти расстояние между точками" << endl;
    cout << "   Результат: " << sol.ex16(3, 7) << endl << endl;
    
    cout << "17. Даны три точки A=1, B=5, C=3 на числовой оси. Найти длины отрезков" << endl;
    Segment seg17 = sol.ex17(1, 5, 3);
    cout << "   Результат:" << endl;
    cout << "   Длина AC: " << seg17.AC << endl;
    cout << "   Длина BC: " << seg17.BC << endl;
    cout << "   Сумма длин: " << seg17.AC + seg17.BC << endl << endl;
    
    cout << "18. Даны три точки A=1, B=5, C=3. Найти произведение длин отрезков AC и BC" << endl;
    cout << "   Результат: " << sol.ex18(1, 5, 3) << endl << endl;
    
    cout << "19. Даны координаты вершин прямоугольника (0,0) и (3,4). Найти периметр и площадь" << endl;
    printRectangle(sol.ex19(0, 0, 3, 4), "   Результат:");
    
    cout << "20. Поменять местами значения переменных A и B" << endl;
    double a20 = 10, b20 = 20;
    cout << "   До обмена: A=" << a20 << ", B=" << b20 << endl;
    sol.ex20(a20, b20);
    cout << "   После обмена: A=" << a20 << ", B=" << b20 << endl << endl;
    
    cout << "21. Циклический сдвиг переменных A→B→C→A" << endl;
    double a21 = 1, b21 = 2, c21 = 3;
    cout << "   До сдвига: A=" << a21 << ", B=" << b21 << ", C=" << c21 << endl;
    sol.ex21(a21, b21, c21);
    cout << "   После сдвига: A=" << a21 << ", B=" << b21 << ", C=" << c21 << endl << endl;
    
    cout << "22. Найти значение функции y = 3x⁶ - 6x² - 7 при x=2" << endl;
    cout << "   Результат: " << sol.ex22(2) << endl << endl;
    
    cout << "23. Найти значение функции y = 4(x-3)⁶ - 7(x-3)³ + 2 при x=5" << endl;
    cout << "   Результат: " << sol.ex23(5) << endl << endl;
    
    cout << "24. Дано значение угла α=180° в градусах. Перевести в радианы" << endl;
    cout << "   Результат: " << sol.ex24(180) << " радиан" << endl << endl;
    
    cout << "25. Дано значение угла α=3.14 радиан. Перевести в градусы" << endl;
    cout << "   Результат: " << sol.ex25(3.14) << "°" << endl << endl;
    
    cout << "26. Найти значение функции y = 6x² - 3√x - 7 при x=4" << endl;
    cout << "   Результат: " << sol.ex26(4) << endl << endl;
    
    return 0;
}