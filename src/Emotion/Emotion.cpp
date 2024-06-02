#include<iostream>
#include "C:/OOP/hoangnv-sfm/src/Emotion/Emotion.h"
using namespace std ;
Emotion::Emotion() : pleasure(0.75) , surprise(0.5) , anger(-0.2) , fear(-0.2) , hate(-0.4) , sad(-0.4) {}

void Emotion::print(){
	cout << "pleasure : " << pleasure << endl << "sad : " << sad ;
}
