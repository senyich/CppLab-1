#include <iostream>
#include <string>
#include <iomanip>
#include "./namespaces/console.h"
#include "./namespaces/solution.h"

int main()
{
    Solution lab;

    Console::writeLine("Задание 1: 4 * a = " + std::to_string(lab.ex1(4)));
    Console::writeLine("Задание 2: a^2 = " + std::to_string(lab.ex2(3)));
    Console::writeLine("Задание 3: 2 * (a + b) = " + std::to_string(lab.ex3(4,5)));
    Console::writeLine("Задание 4: " + std::to_string(lab.ex4(5)));

    Circle c = lab.ex5(5);
    std::string ans = "Задание 5:\n"
                      "  V = " + std::to_string(c.V) + "\n" +
                      "  S = " + std::to_string(c.S);
    Console::writeLine(ans);

    Console::writeLine("Задание 6: " + std::to_string(lab.ex6(5,3,4)));

    c = lab.ex7(14);
    ans = "Задание 7:\n"
          "  L = " + std::to_string(c.L) + "\n" +
          "  S = " + std::to_string(c.S);
    Console::writeLine(ans);

    Console::writeLine("Задание 8: " + std::to_string(lab.ex8(78,66)));
    Console::writeLine("Задание 9: " + std::to_string(lab.ex9(78,66)));

    Number num = lab.ex10(26,14);
    ans = "Задание 10:\n" +
          ("  Разность = " + std::to_string(num.Difference) + "\n") +
          ("  Сумма = " + std::to_string(num.Summa) + "\n") +
          ("  Частное = " + std::to_string(num.Quotient) + "\n") +
          ("  Произведение = " + std::to_string(num.Product) + "\n");
    Console::writeLine(ans);

    Number num = lab.ex10(26,14);
    ans = "Задание 10:\n" +
          ("  Разность = " + std::to_string(num.Difference) + "\n") +
          ("  Сумма = " + std::to_string(num.Summa) + "\n") +
          ("  Частное = " + std::to_string(num.Quotient) + "\n") +
          ("  Произведение = " + std::to_string(num.Product) + "\n");
    Console::writeLine(ans);
    return 0;
}
