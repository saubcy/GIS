#include "lbscommon.h"

double GetDistanceByLongitudeLatitude(double dLongitude1, double dLatitude1, 
		double dLongitude2, double dLatitude2)
{
	double dDistance(0);
	//-------------------------------------------------------------------
	double dRadLatitude1 = dLatitude1*PI/180.0;
	double dRadLatitude2 = dLatitude2*PI/180.0;
	double dDisLatitude = dRadLatitude1 - dRadLatitude2;
	double dDisLongitude = dLongitude1*PI/180.0 - dLongitude2*PI/180.0;

	dDistance = 2 * asin(sqrt(pow(sin(dDisLatitude/2),2) 
			+ cos(dRadLatitude1)*cos(dRadLatitude2)*pow(sin(dDisLongitude/2),2)));
	dDistance *= EARTH_RADIUS;
	//-------------------------------------------------------------------
	return dDistance;
}



