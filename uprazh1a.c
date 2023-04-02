#include <stdio.h>  // Библиотека для работы с функциями ввода-вывода
#include <stdbool.h>
#include <stdlib.h>	//Данная библиотека для многих функций Си нужна, но не здесь
#include <locale.h> // Библиотека для указания локации (региональной кодировки) для Visual Studio

int bissectrice(double, double);
int vertical(double, double);
int horizontal(double, double);

// Конструкция с void main работает только на Си. Си++ такое уже не примет.
// Дело в том, что при выполнении функции main() запускается новый Процесс (Process), к которой автоматически подключается Runtime Library.
// return 0; - является кодом выхода из этого Process. Поэтому необходим int main(){return0;}
int main() {
	int x=-5;
	int y=5;
	printf("x = ");
	scanf("%d", &x);
	printf("y = ");
	scanf("%d", &y);
	printf("%d", (!vertical(x, y) && !horizontal(x, y) && bissectrice(x, y)) || (vertical(x, y) && horizontal(x, y)));
	return 0;
}

int bissectrice(double x, double y) {
	bool res = true;
	res = ((y <= -x));
	return res;
}

int vertical(double x, double y) {
	bool res = true;
	res = (x > 4);
	return res;
}
int horizontal(double x, double y) {
	bool res = true;
	res = (y > 3);
	return res;
}

// (7, 9) True
// (-6, 7) True
// (6, 4) true
// (0, 0) true
// (0, 3) false
// (2, 10) false
// (11, 57) true
// (1, 7) false
// (68, 90) true
// (-15, 1) true
// (23, -80) false




