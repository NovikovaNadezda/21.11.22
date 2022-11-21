#include <iostream>
using namespace std;
int sign(double x) {
	if (x < 0)return -1;
	if (x == 0)return 0;
	if (x > 0)return 1;
}
int rootscount(double a, double b, double c) {
	double d = b * b - 4 * a * c;
	if (d < 0) return 0;
	if (d == 0) return 1;
	if (d > 0) return 2;
}
int circles (double r) {
	if (r < 0) return 0;
	if (r == 0) return 0;
	if (r  > 0) return 2;
}
int main() {
	setlocale(LC_ALL, "russian");
	//Proc16.Описать функцию Sign(X) целого типа, возвращающую для вещественного числа X следующие значения :
	//если X < 0 то -1
	//если X = 0 то 0
	//если X > 0 то 1
	//С помощью этой функции найти значение выражения Sign(A) + Sign(B)
	//для данных вещественных чисел A и B.
	/*double a, b;
	cin >> a >> b;
	cout << sign(a) + sign(b) << endl;*/
	/*Proc17.Описать функцию rootscount(A, B, C) целого типа, определяющую
		количество корней квадратного уравнения A·x
		2 + B·x + C = 0 (A, B, C —
			вещественные параметры, A 6 = 0).С ее помощью найти количество корней
		для каждого из трех квадратных уравнений с данными коэффициентами.
		Количество корней определять по значению дискриминанта :
	D = B
		2 − 4·A·C.*/	/*double a, b, c;
	for (int i = 1; 1 <= 3; i++); {
		cin >> a >> b >> c;
		cout << rootscount(a, b, c) << endl;
	}*/
	/*Proc18.Описать функцию CircleS(R) вещественного типа, находящую площадь круга радиуса R(R — вещественное).С помощью этой функции
		найти площади трех кругов с данными радиусами.Площадь круга радиуса R вычисляется по формуле S = π·R
		2
		.В качестве значения π использовать 3.14.*/
	double r;
	cin >> r;
	cout << sqrt(circles(r) * 3.14) << endl;
}