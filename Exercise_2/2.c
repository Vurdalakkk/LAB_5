// Подключение библиотек
#include <stdio.h>
#include <locale.h>
#include <math.h>

// Обозначение констант 
#define    k    1.2

// Создание основной функции
int main() {
	// Добавление русской локали
	setlocale(LC_CTYPE, "RUS");
	// Создание переменной X,A,B
	float a;
	float b;
	float x;
	float y;
	// Ввод числа X с клавиатуры
	puts("Введите число X: ");
	scanf("%f", &x);
	getchar();
	// Расчет и нахождение значений
	a = exp(k * x);
	b = pow(log(x), 2) + pow(k, 5);
	y = pow(pow(a, 2) + pow(b, 2), 1.0 / 3.0);
	// Вывод найденных значений

	printf("Переменные: \nx = %f\ny = %f\na = %f\nb = %f", x, y, a, b);
	return 0;
}
