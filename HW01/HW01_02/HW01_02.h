#pragma once
#ifndef MyGeometry_h
#define MyGeometry_h
namespace MyGeometry
{
	struct  Point //#1
	{
		float x;
		float y;
		double Length(); //#2
		std::string CoutPoint(); //#3
	};
	Point* LoadPoint(const char*, unsigned int&); //#4
	Point MinVerticalDistance(Point* &); //#5
	Point* SortbyLength(Point*&); //#6
	void Report(const char* filename, Point* &);//#7
}
#endif