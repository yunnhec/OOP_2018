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
	const char* infile,*outfile;
	infile = "Point_HW1.txt";
	outfile = "Report_HW1.txt";
	Point* data;
	Point Px;
	Point* Sr;
	unsigned int nP;
	data = LoadPoint(infile, nP);
	Px = MinVerticalDistance(data);
	Sr = SortbyLength(data);
	Report(outfile, data);
	cout << "�U�I�P���I�Z���Ѥp��j�ƧǡG" << endl;
	for (int i = 0; i < nP; i++) {
	cout << Sr[i].CoutPoint() << endl;
	}
	system("pause");
	return 0;
}