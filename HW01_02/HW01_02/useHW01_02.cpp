// useHW01_02.cpp : �w�q�D���x���ε{�����i�J�I�C
//

#include "stdafx.h"
#include <iostream>
#include <fstream>
#include <math.h>
#include <string>
#include "HW01_02.h"

using namespace std;
using namespace MyGeometry;
int main()
{
	const char* filename;
	filename = "Point_HW1.txt";
	Point* arr;
	Point px;
	Point* asort;
	unsigned int nPoint;
	arr = LoadPoint(filename, nPoint);
	px = MinVerticalDistance(arr);
	asort = SortbyLength(arr);
	Report(filename, arr);
	cout << "�U�I�P���I�Z���Ѥp��j�ƧǡG" << endl;
	for (int i = 0; i < nPoint; i++) {
		cout << asort[i].CoutPoint() << endl;
	}
	system("pause");
	return 0;
}

