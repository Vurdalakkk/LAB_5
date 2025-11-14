<h1 align="center">Домашнее задание к работе 5</h1>
<div align="center">



## Условие задачи

<img width="627" height="90" alt="изображение" src="https://github.com/user-attachments/assets/410cb5b6-c568-490f-9f1c-0929688e8256" />


## 1. Алгоритм и блок-схема

<div align="center">

### Алгоритм
1. **Начало**
2. Ввод значений с клавиатуры<br>
   - `x` - первое число<br>
   - `y` - второе число
   - `z` - третье число
3. Вычисления<br>
   - `double a1 = atan(x);` 
   - `double a2 = 5 * a1;`   
   - `double a3 = acos(x);` 
   - `double a4 = fabs(x - y);`
   - `double a5 = pow(x, 2);`
   - `double a6 = 3 * a4;` 
   - `double a7 = x + a6 + a5;` 
   - `double a8 = a4 * z;` 
   - `double a9 = a8 + a5;` 
   - `double a10 = a7 / a9;` 
   - `double a11 = 0.25;`
   - `double a12 = a11 * a3 * a10;` 
   - `double a13 = a2 - a12;` 
4. Вывод каждого действия и конечного ответа.
5. **Конец**

</div>

### Блок-схема

<img width="399" height="882" alt="Lab5_dz" src="https://github.com/user-attachments/assets/ffe77eeb-c6b8-4084-bd81-b2bd06c39df7" />


</div>

## 2. Реализация программы

```c
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

```
<div align="center">

## 3. Результаты работы программы

<img width="973" height="503" alt="изображение" src="https://github.com/user-attachments/assets/3746c1ff-f013-4a5b-b7de-760458ad9c7c" />



## 4. Информация о разработчике

Выполнил Гребенников Артем, бИПТ-252


