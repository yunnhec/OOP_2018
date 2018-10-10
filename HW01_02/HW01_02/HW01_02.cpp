// HW01_02.cpp : �w�q�D���x���ε{�����i�J�I�C
//

#include "stdafx.h"
#include <iostream>
#include <fstream>
#include <math.h>
#include <string>
#include "HW01_02.h"
using namespace std;
//using namespace MyGeometry;
double MyGeometry::Point::Length() { //calculate the distance from the point to the origin
	double tmp = pow((pow(x, 2) + pow(y, 2)), 0.5);
	return tmp;
}

string MyGeometry::Point::CoutPoint() { //return the string format string (X,Y)
	string tmp = "(" + to_string(x) + "," + to_string(y) + ")";
	return tmp;
}


MyGeometry::Point* LoadPoint(const char* filename, unsigned int& nPoint){ //opens a text file
	ifstream file;
	file.open(filename);
	int n = 0;
	MyGeometry::Point* p;
	float* data;
	float tmp;
	if (!file) {
		cout << " Fail to open the input file." << endl;
	}
	else{
		while (!file.eof()) {
			file >> tmp;
			n++;
		}
		file.close();
		n--;
		nPoint = n / 2;
		data = new float[n];
		p = new MyGeometry::Point[nPoint];
		file.open(filename);
		for (int i = 0; i < n; i++){
			file >> data[i];
			if (i % 2) //odd
				p[i / 2].x = data[i];
			else
				p[i / 2].y = data[i];
		}
		file.close();
	}
	return p;
};

MyGeometry::Point MinVerticalDistance(MyGeometry::Point* &p){
	int n = _msize(p) / sizeof(*p);
	int pos = 0;
	float tmp = p[pos].y;
	for (int i = 0; i < n; i++){
		if (abs(p[i].y) < abs(tmp)){
			pos = i;
			tmp = p[i].y;
		}
	}
	return p[pos];
};

MyGeometry::Point* MyGeometry::SortbyLength(Point*&p) { //from small to large depending on the distance
	Point tmp;
	int n = _msize(p) / sizeof(*p);
	for (int i = n - 1; i > 0; i--){
		for (int j = 0; j < i; ++j){
			if (p[j].Length()>p[j + 1].Length()){
				tmp = p[j];
				p[j] = p[j + 1];
				p[j + 1] = tmp;
			}
		}
	}
	return p;
};

void MyGeometry::Report(const char* filename, Point* &p) {
	ofstream file(filename, ios::out);

	if (!file){
		cout << " Fail to open the output file." << endl;
	}
	else{
		int n = _msize(p) / sizeof(*p);
		Point p1 = MinVerticalDistance(p);
		Point* S = SortbyLength(p);
		Point p2 = S[n - 1];

		//write to the file
		file << "����ɦV�{���]�p�Ĥ@���@�~" << endl;
		file << "N16074603�B�b�g" << endl;
		file << "�I�ƥءG" << n << endl;
		file << "�̱���x�b���I�G" << p1.CoutPoint() << endl;
		file << "�P���I�Z���̻����I�G" << p2.CoutPoint() << "�B�Z����" << p2.Length() << endl;
	}
	file.close();
};


