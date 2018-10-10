// HW01.cpp : 定義主控台應用程式的進入點。
//

#include "stdafx.h"
#include <iostream>
#include <time.h>
using namespace std;

template<class T> T find_max(T *data, int size){
	T result = data[0];
	for (int i = 1; i < size; i++){
		if (result < data[i])
			result = data[i];
	}
		return result;
}

	int main()
	{
		srand(time(NULL));
		int sizeS;
		cout << "Input the size of array of short = ";
		cin >> sizeS;
		
		short *test = new short[sizeS];
		for (int i = 0; i < sizeS; i++){
			test[i] = rand()%1000;
		}
		cout << "Array of 6 short values: " << endl;
		for (int i = 0; i < sizeS; i++){
			cout << test[i] <<'\t';
			if (i == sizeS-1)
				cout << endl;
		}
		cout << "Maximun: " << find_max(test, sizeS) << endl;
		cout << "----------------------------------------------" << endl;

		double upB = 10.0, lowB = -10.0; //defind upper bound and lower bound (-10~10)
		int sizeD;
		cout << "Input the size of array of double = ";
		cin >> sizeD;
		double *test2 = new double[sizeD];
		for (int i = 0; i < sizeD; i++){
			test2[i] = (double)rand() / (RAND_MAX);
			test2[i] = lowB + test2[i] * (upB - lowB);
		}
		cout << "Array of 6 short values: " << endl;
		for (int i = 0; i < sizeD; i++){
			cout << test2[i] << '\t';
			if (i == sizeD-1)
				cout << endl;
		}
		cout << "Maximun: " << find_max(test2, sizeD) << endl;
		
		

		system("pause");
		return 0;
	}

