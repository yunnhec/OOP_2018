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
	Point* LoadPoint(const char* filename, unsigned int& nPoint); //#4
	Point MinVerticalDistance(Point* &p); //#5
	Point* SortbyLength(Point*&p); //#6
	void Report(const char* filename, Point* &p);//#7
}
#endif