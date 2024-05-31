#ifndef WARD_H
#define WARD_H
#include<string>
#include<map>
#include<vector>
#include "E:/cv-oop-main/src/Point/Point.h"
#include <utility> 
using namespace std ;

class Ward{
public:
	string name ;
// cac diem tu B -> W 	
	Point gate_in ;
	Point gate_out ;
	Point top_left ;
	Point top_right ;
	Point bottom_right ;
	Point bottom_left ;
// diem A
	Point gate_inA1 ;
	Point gate_inA2 ;
	Point gate_outA1 ;
	Point gate_outA2 ;
	Point top_leftA ;
	Point top_rightA ;
	Point bottom_rightA ;
	Point bottom_leftA ;
	void calculate1( pair<string,vector<float>> hospitalData ) ;
	Ward getward();
//	void invite ( Point n );
};

#endif