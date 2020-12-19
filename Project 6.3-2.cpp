// Lab_06_3.cpp
// < Кузів Назар >
// Лабораторна робота № 6.3-1
// Опрацювання одновимірних масивів за допомогою звичайних функцій 
// Варіант 6

#include <iostream>
#include <time.h>
#include <string>

using namespace std;

void Create(int* a, const int size, const int Low, const  int High, int i);
void Cout(int* a, const int size, int i);
void CoutSum(int S);
int Sum(int* a, const int size, int S, int i);

// 1)Шаблони 
// ----------------------------------------------------------

template <typename I>
void Create2(I* a, const I size, const I Low, const  I High, I i)
{
	a[i] = Low + rand() % (High - Low + 1);
	if (i < size - 1)
		Create(a, size, Low, High, i + 1);

}

template <typename I>
void Cout2(I* a, const I size, I i)
{
	cout << " a[" << i << "] = " << a[i] << ";";
	if (i < size - 1)
		Cout2(a, size, i + 1);
	else
		cout << endl;
}

template <typename I>
void CoutSum2(I S)
{
	cout << endl;
	cout << " Sum a[]=" << S << endl;
}

template <class I>
I Sum2(I* a, const I size, I S, I i)
{
	S += a[i];

	if (i < size - 1)
		Sum2(a, size, S, i + 1);
	else
		return S;
}

// ----------------------------------------------------------

int main()
{
	srand((unsigned)time(NULL));


	int Low, High, S, S1;
	const int n = 6;
	int a[n];

	cout << "Low ="; cin >> Low;
	cout << "High ="; cin >> High;
	cout << endl;

	Create(a, n, Low, High,0);
	Cout(a, n,0);
	S = Sum(a, n,0,0);
	CoutSum(S);

	cout <<"-----------------------------------"<< endl;

	Create2(a, n, Low, High, 0);
	Cout2(a, n, 0);
	S = Sum2(a, n, 0, 0);
	CoutSum2(S);

	return 0;
}
// 1)Звичайні Функції
// ----------------------------------------------------------

void Create(int* a, const int size, const int Low, const  int High, int i)
{
	a[i] = Low + rand() % (High - Low + 1);
	if (i < size - 1)
		Create(a, size, Low, High, i + 1);

}


void Cout(int* a, const int size, int i)
{
	cout << " a["  << i << "] = "  << a[i]<<";";
	if (i < size - 1)
		Cout(a, size, i + 1);
	else
		cout << endl;
}

void CoutSum(int S)
{
	cout << endl;
	cout << " Sum a[]=" << S << endl;
}

int Sum(int* a, const int size,int S,int i)
{
	S += a[i];

	if (i < size - 1)
		Sum(a, size, S, i + 1);
	else
		return S;
}
