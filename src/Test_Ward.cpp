#include<iostream>
#include<map>
#include<vector>
#include "E:/cv-oop-main/src/Ward/Ward.h"
#include <utility> 
using namespace std ;

int main(){
	map<string,vector<float>> mai = {
        {"G", {14,2 ,14,10 ,24}},
        {"K", {38,2, 38,10 ,20}},
        {"N", {61,2, 61,10 ,22}},
        {"F", {6,12, 6,28, 8}},
        {"E", {23,12, 23,28, 22}},
        {"M", {47,12 ,47,28 ,22}},
        {"W", {66,12 ,66,28 ,12}},
        {"L", {37,30, 37,40, 22}},
        {"B", {61,30, 61,40 ,22}},
        {"PosofA" , {13,30, 2,35, 13,40, 24,35}}
    };
    Ward tmp ;
    vector<Ward> v ;
    for( auto it : mai ){
    	tmp.calculate1(it) ;
    	v.push_back( tmp.getward() );
	}
	for( auto it1 : v ){
		cout << it1.name << endl ;
		if ( it1.name != "PosofA" ){
		it1.invite( it1.gate_in );
		it1.invite( it1.gate_out ) ;
		it1.invite( it1.top_left ) ;
	}
	else{
		it1.invite( it1.gate_inA1 );
		it1.invite( it1.gate_outA1 ) ;
		it1.invite( it1.top_leftA ) ;
		it1.invite( it1.bottom_rightA ) ;
	}
	}
	return 0;
}