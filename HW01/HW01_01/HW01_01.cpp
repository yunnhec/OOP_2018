// HW01_01.cpp : 定義主控台應用程式的進入點。
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

template<> char* find_max<char*>(char** data, int size){
	char* result = data[0];
	for (int i = 1; i < size; i++){
		if (strlen(data[i]) > strlen(result))
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

	short *test = new short[sizeS - 1];
	for (int i = 0; i < sizeS; i++){
		test[i] = rand() % 1000; //values range from 0~1000
	}
	cout << "Array of short values: " << endl;
	for (int i = 0; i < sizeS; i++){
		cout << test[i] << '\t';
		if (i == sizeS - 1)
			cout << endl;
	}
	cout << "Maximun: " << find_max(test, sizeS) << endl;
	cout << "----------------------------------------------" << endl;

	double upB = 10.0, lowB = -10.0; //define upper bound and lower bound (-10~10)
	int sizeD;
	cout << "Input the size of array of double = ";
	cin >> sizeD;
	double *test2 = new double[sizeD - 1];
	for (int i = 0; i < sizeD; i++){
		test2[i] = (double)rand() / (RAND_MAX);
		test2[i] = lowB + test2[i] * (upB - lowB);
	}
	cout << "Array of double values: " << endl;
	for (int i = 0; i < sizeD; i++){
		cout << test2[i] << '\t';
		if (i == sizeD - 1)
			cout << endl;
	}
	cout << "Maximun: " << find_max(test2, sizeD) << endl;
	cout << "----------------------------------------------" << endl;
	int sizeC;
	cout << "Input the size of array of char = ";
	cin >> sizeC;
	char** test3 = new char*[sizeC];
	for (int i = 0; i < sizeC; i++){
		int n = rand() % 15 + 1;//avoid string with no char
		char* tmp = new char[n];
		//cout << "n_" << i << " = " << n << endl; //length of each string
		for (int j = 0; j < n; j++)
			tmp[j] = (char)(rand() % 26 + 97);
		test3[i] = tmp;
		test3[i][n] = '\0';
	}
	cout << "Array of the atring: " << endl;
	for (int i = 0; i < sizeC; i++){
		int c = 0;
		while (test3[i][c] != '\0'){
			cout << test3[i][c++];
		}
		cout << '\t';
	}
	cout << endl;
	cout << "Address of the longest string: " << find_max(test3, sizeC) << endl;

	system("pause");
	return 0;
}

