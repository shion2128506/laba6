#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <locale.h>

void task1();
void task2();
void task3();

int main()
{
	setlocale(LC_ALL, "RUS");
	task1();
	task2();
	task3();
}

void task1()
{
	int year;
	printf("Введите год: ");
	scanf("%d", &year);

	int rem = year % 4;

	if (rem == 0) 
	{
		printf("Год %d високосный\n", year);
	}
	else {
		printf("Год %d не високосный\n", year);
	}

	if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) 
	{
		printf("Год %d високосный\n", year);
	}
	else {
		printf("Год %d не високосный\n", year);
	}
}
void task2()
{
	double x;
	printf("Введите значение x: ");
	scanf("%lf", &x);

	// Контрольные примеры:
	// 1) x = 1 (< 3.2): 
	//    F(1) = 1^4 + 9 = 1 + 9 = 10
	// 2) x = 4 (>= 3.2):
	//    F(4) = (54 * 4^4) / (-5 * 4^2 + 7) = (54 * 256) / (-5 * 16 + 7) = 13824 / (-80 + 7) = 13824 / -73 ≈ -189.3699

	// Использование тернарной операции для вычисления функции
	double F = (x < 3.2) ? (pow(x, 4) + 9) : ((54 * pow(x, 4)) / (-5 * pow(x, 2) + 7));

	// Вывод результата с использованием тернарной операции в printf
	printf("%s\n", (x < 3.2) ?
		"Значение F(x) для x < 3.2: " :
		"Значение F(x) для x >= 3.2: ");

	printf("F(%.2lf) = %.4lf\n", x, F);
}
void task3()
{
	double X, Y;

	printf("Введите два числа (X и Y): ");
	scanf("%lf %lf", &X, &Y);

	const char* sign = (X < Y) ? "<" : ((X > Y) ? ">" : "=");

	printf("%.2lf %s %.2lf\n", X, sign, Y);
}