// sem2Lab2.cpp: определяет точку входа для консольного приложения.
//

#include <stdio.h>
#include <string.h>
#include <conio.h>
#include "stdafx.h"
#include <iostream>

using namespace std;

void _tmain(int argc, _TCHAR* argv[])
{
	int x = 0;
	char bufFinish[35];

	struct airport{
		char number[10];
		char airplane[25];
		char finish[35];
		char time[15];
	};

	struct airport reis[20];

	cout << "skolko zapisei ";
	cin >> x;
	cout << endl;

	for (int i = 0; i < x; i++)
	{
		cout << "number ";
		cin >> reis[i].number;
		cout << "airplane ";
		cin >> reis[i].airplane;
		cout << "finish ";
		cin >> reis[i].finish;
		cout << "time ";
		cin >> reis[i].time;
		cout << endl;
	}

	cout << endl;
	cout << endl;

	cout << "write finish ";
	cin >> bufFinish;

	cout << endl;
	cout << endl;

	for (int i = 0; i < x; i++)
	{
		if (strcmp(reis[i].finish,bufFinish) == 0)
		{
			cout << "zapis v structure " << i + 1 << endl;
			cout << "nubmer " << reis[i].number << endl;
			cout << "airplane " << reis[i].airplane << endl;
			cout << "finish " << reis[i].finish << endl;
			cout << "time " << reis[i].time << endl;
			cout << endl;
		}
	}
		system("pause");
}

