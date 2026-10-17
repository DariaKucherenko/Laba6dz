#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <locale.h>
#include <math.h>

int main(void) {
    
    z1();
    z2();
}
int z1(void) {

    setlocale(LC_ALL, ".UTF8");

    int N;
    printf("Введите целое число N (от 0 до 1000): ");
    scanf("%d", &N);


    int temp = abs(N);
    int sum = 0;

    while (temp > 0) {
        sum += temp % 10;
        temp /= 10;
    }

    printf("\nСумма цифр числа %d равна: %d\n", N, sum);

    if (sum % 3 == 0) {
        printf("сумма цифр кратна трем\n");
    }
    else {
        printf("сумма цифр не кратна трем\n");
    }

    return 0;
}

int z2(void) {

    setlocale(LC_ALL, ".UTF8");
    double x, y;

    //контрольныве примеры: (1 0) да, (6 6) нет, (1 -2) да, (6 3) нет
    printf("Введите координаты точки (x y): ");
    if (scanf("%lf %lf", &x, &y) != 2) {
        printf("Ошибка ввода!\n");
        return 1;
    }

    if (x >= 0 && (x * x + y * y) <= 36 && (x + y) <= 6) {
        printf("точка (%.2f, %.2f) принадлежит заштрихованной области\n", x, y);
    }
    else {
        printf("точка (%.2f, %.2f) не пренадлежит заштрихованной области\n", x, y);
    }

    return 0;
}