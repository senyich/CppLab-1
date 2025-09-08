#include <iostream>
#include <string>
#include <iomanip>
#include <stdio.h>
#include "solution.h"

using namespace std;

//TODO: разбить по файлам, в первом вещественные числа, во втором целые
int main() {
    double x1,x2;
    int n;
    cout << "1 Задание, 16 Задача." << endl << endl;
    cout << "Введите координату x1:" << endl;
    cin >> x1;
    cout << "Введите координату x2:" << endl;
    cin >> x2;
    cout << "Результат: |x1-x2| = " << ex_1_16(x1, x2) << endl << endl;

    printf("2 Задание, 16 Задача.\n");
    printf("Введите трехзначное число:\n");
    scanf("%d", &n); 
    int result = ex_2_16(n);
    printf("Исходное число: ");
    printf("%d", n);
    printf("\n");
    printf("Измененное число: ");
    printf("%d", result);

    return 0;
}