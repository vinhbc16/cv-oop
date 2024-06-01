#include "Personality.h"
#include <iostream>
using namespace std;

// Định nghĩa constructor 
Personality::Personality( double lambda1 , double pe_Threshold , double ne_Threshold ) : lambda(lambda1) , positiveEmotionThreshold(pe_Threshold) , negativeEmotionThreshold(ne_Threshold) {}

// Định nghĩa phương thức print
void Personality::print() {
    cout << "lamda : " << lambda << endl ;
    cout << "indexemotion : " << positiveEmotionThreshold << " " << negativeEmotionThreshold ;
}
