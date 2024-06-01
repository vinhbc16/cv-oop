#ifndef PERSONALITY_H
#define PERSONALITY_H

class Personality {
public:
	double lambda ;
	double positiveEmotionThreshold ;
	double negativeEmotionThreshold ;
	Personality( double lambda1 , double pe_Threshold , double ne_Threshold );
	void print() ;
};

#endif