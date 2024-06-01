#ifndef PEDESTRIAN_H
#define PEDESTRIAN_H
#include<vector>
#include "src/Ward/Ward.h"
#include "src/Point/Point.h"
#include "src/Walkability/Walkability.h"
#include<iostream>
using namespace std ;

class Pedestrian{
public:
	int ID ;
	Ward start ;
	Ward end ;
	vector<Ward> journey ;
	double velocity ;
	Personality personality ;
	Emotion emotion ;
	vector<Event> events ;
	double walkingTime ;
	double distance ;
	double age ;
	AGVEvent impaceOfAGV ;
	Point tempPoints ;
};

#endif