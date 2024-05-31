#include<iostream>
#include "E:/cv-oop-main/src/Ward/Ward.h"
#include "E:/cv-oop-main/src/Point/Point.h"
#include<map>
#include<vector>
#include<string>
#include <utility> 
using namespace std ;

void Ward::calculate1( pair<string,vector<float>> hospitalData ){
        		string key = hospitalData.first;
        		vector<float> values = hospitalData.second;
        	if( (key != "NumofDepartment") && (key != "PosofEndAGV") && (key != "PosofHos") && (key != "PosofStartAGV") && (key != "PosofA") ){
					for (int i = 0; i < values.size() - 1 ; i += 2) {
						if( i == 0 ){
            			gate_in.x = values[i] ;
            			gate_in.y = values[i+1] ;
            			}
            			else{
            				gate_out.x = values[i] ;
            				gate_out.y = values[i+1] ;
						}
            		}
            		float c = values.back() / 2 ;
            			top_left.x = gate_in.x - c ;
            			top_left.y = gate_in.y ;
						top_right.x = gate_in.x + c ;
						top_right.y = gate_in.y ;
						bottom_right.x = gate_out.x + c ;
						bottom_right.y = gate_out.y ;
						bottom_left.x = gate_out.x - c ;
						bottom_left.y = gate_out.y ;
						name = key ;
       		}
       		else if( key == "PosofA" ){
       				for (int i = 0; i < values.size(); i += 2) {
						if( i == 0 ){
            				gate_inA1.x = values[i] ;
            				gate_inA1.y = values[i+1] ;
            			}
            			else if ( i == 2 ){
            				gate_inA2.x = values[i] ;
            				gate_inA2.y = values[i+1] ;	
						}
						else if( i == 4 ){
							gate_outA1.x = values[i] ;
            				gate_outA1.y = values[i+1] ;
						}
            			else{
            				gate_outA2.x = values[i] ;
            				gate_outA2.y = values[i+1] ;
						}
            		}
            		float c = gate_inA1.x - gate_inA2.x ;
            			top_leftA.x = gate_inA1.x - c ;
            			top_leftA.y = gate_inA1.y ;
						top_rightA.x = gate_inA1.x + c ;
						top_rightA.y = gate_inA1.y;
						bottom_rightA.x = gate_outA1.x + c ;
						bottom_rightA.y = gate_outA1.y ;
						bottom_leftA.x = gate_outA1.x - c ;
						bottom_leftA.y = gate_outA1.y ;
						name = key ;
			   }
}
Ward Ward::getward(){
	return *this ;
}
//void Ward::invite( Point n ){
//	n.output() ;
//}


