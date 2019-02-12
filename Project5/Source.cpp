#include <iostream>
#include <stdio.h>
#include <time.h>
#include <Windows.h>
#include <locale.h>
#include <stdlib.h>
using namespace std;

bool chert(int c) {
	if (c % 2 == 0)
	{
		return true;
	}
	else
	{
		return false;
	}
}

bool znak( char c){
	char arr[4] = { ',','.','!','?' };
	for (size_t i = 0; i < 4; i++)
	{
		if (c==arr[i])
		{
			return true;
		}
		else 
		{
			return false;
		}
	}
	
}

void main() 
{

	//1.	Напишите функцию, которая принимает число и возвращает истину, если число четное и ложь, если нечетное.
	/*int a;
		cout << "Vvedite a" << endl;
	cin >> a;
	chert(a);
	cout << chert(a) << endl;*/
	//2.	Написать функцию, которая возвращает истину, если переданный параметр является знаком препинания и ложь, если не является.

	/*char ch;
	cin >> ch;
	znak(ch);
	cout << znak << endl;*/








	system("pause");
}