// Персональный шаблон проекта C++
#include <iostream>
using namespace std;
// Рекурсивная функция
int fact(int n) {
	if (n <= 1)
		return 1;
	return n * fact(n - 1);
}

int fibo(int n);

int main() {
	setlocale(LC_ALL, "Russian");
	int n;

	/*cout << "Введите число: ";
	cin >> n;
	cout << n << "! = " << fact(n) << endl;*/

	// Задача 1
	cout << "Задача 1.\nПервые 13 чисел Фибоначчи: ";
	for (int i = 0; i < 13; i++)
		cout << i << ". " << fibo(i) << endl;

	return 0;
}
int fibo(int n) {
	if (n == 0 || n == 1)
		return n;
	return fibo(n - 2) + fibo(n - 1);
}