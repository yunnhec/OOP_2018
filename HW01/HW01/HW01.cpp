// HW01.cpp : �w�q�D���x���ε{�����i�J�I�C
//

#include "stdafx.h"
#include <iostream>

using namespace std;

template<class Max> Max find_max(Max *data, int size){
	Max result = data[0];
	for (int i = 1; i < size; i++){
		if (result < data[i])
			result = data[i];
		return result;
	}

	int _tmain(int argc, _TCHAR* argv[])
	{
		return 0;
	}

