// Подключение библиотек
#include <stdio.h>
#include <locale.h>
#include <math.h>

// Создание основной функции

int main() {
	setlocale(LC_CTYPE, "RUS");
	float x;
	float y;
	double z;
	puts("Введите переменные X,Y,Z");
	scanf("%f %f %lf", &x, &y, &z);
	getchar();
	double a1 = atan(x); //arctg(x)
	double a2 = 5 * a1;   // 5 * arctg(x)
	double a3 = acos(x); // arccos(x)
	double a4 = fabs(x - y); // |x-y|
	double a5 = pow(x, 2); // x^2
	double a6 = 3 * a4; // 3 * |x-y|
	double a7 = x + a6 + a5; // x + 3 * |x-y| + x ^2
	double a8 = a4 * z; // |x-y| * z
	double a9 = a8 + a5; // |x-y| * z + x^2
	double a10 = a7 / a9; // (x + 3 * |x-y| + x^2) / (|x-y| * z + x^2)
	double a11 = 0.25; // 1/4
	double a12 = a11 * a3 * a10; // 1/4 * arccos(x) * (x + 3 * |x-y| + x^2) / (|x-y| * z + x^2)
	double a13 = a2 - a12; // 5 * arctg(x) - 1/4 * arccos(x) * (x + 3 * |x-y| + x^2) / (|x-y| * z + x^2)
	printf("a1 - %lf \n a2 - %lf \n a3 - %lf \n a4 - %lf \n a5 - %lf \n a6 - %lf \n a7 - %lf \n a8 - %lf \n a9 - %lf \n a10 - %lf \n a11 - %lf \n a12 - %lf \n a13 - %lf \n ", a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12);
	printf("%lf", a13);
}
