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
		short *test = new short;
		for (int i = 0; i < 6; i++){
			test[i] = rand()%1000;
		}
		cout << "Array of 6 short values: " << endl;
		for (int i = 0; i < 6; i++){
			cout << test[i] <<'\t';
			if (i == 5)
				cout << endl;
		}
		cout << "Maximun: " << find_max(test, 6) << endl;
		cout << "----------------------------------------------" << endl;

		double upB = 100.0, lowB = 10.0; //defind upper bound and lower bound (0~10)
		double *test2 = new double;
		for (int i = 0; i < 6; i++){
			test2[i] = rand() / (RAND_MAX+1);
			//test2[i] = lowB + test2[i] * (upB - lowB);
		}
		/*cout << "Array of 6 short values: " << endl;
		for (int i = 0; i < 6; i++){
			cout << test2[i] << '\t';
			if (i == 5)
				cout << endl;
		}*/
		//cout << "Maximun: " << find_max(test2, 6) << endl;

		

		system("pause");
		return 0;
	}

