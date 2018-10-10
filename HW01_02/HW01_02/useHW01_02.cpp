// useHW01_02.cpp : 定義主控台應用程式的進入點。
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
	cout << "各點與原點距離由小到大排序：" << endl;
	for (int i = 0; i < nPoint; i++) {
		cout << asort[i].CoutPoint() << endl;
	}
	system("pause");
	return 0;
}

