/*
 * test.cpp
 *
 *  Created on: 2012-9-10
 *      Author: Conan
 */

#include "lbscommon.h"
#include "gpsutil.h"
#include <stdlib.h>
#include <stdio.h>
#include <iostream>
#include<math.h>

using namespace std;

int main() {
	CRDGEODETIC geo_0, geo_1;
	geo_0.longitude = 141.221;
	geo_0.latitude = 24.5685;

	geo_1.longitude = 141.221;
	geo_1.latitude = 24.5685;

	CRDCARTESIAN p_0, p_1;

	GeodeticToCartesian(&p_0, &geo_0);
	printf("dx: %lf, dy: %lf \n", p_0.x, p_0.y);

	GeodeticToCartesian(&p_1, &geo_1);
	printf("dx: %lf, dy: %lf \n", p_1.x, p_1.y);

	double x1 = 1;
	double y1 = 0;
	double x2 = 9;
	double y2 = 0;

	x1 = p_0.x;
	y1 = p_0.y;
	x2 = p_1.x;
	y2 = p_1.y;

//	x1 = 2718429.38940479;
//	y1 = 47522433.1856098;
//	x2 = 4133837.81659254;
//	y2 = -40414032.6434566;

	double distance =
			sqrt( (x1-x2)*(x1-x2)+(y1-y2)*(y1-y2) );
	printf("distance_p: %lf\n", distance);
	printf("distance_geo: %lf\n",
			GetDistanceByLongitudeLatitude(
					geo_0.longitude, geo_0.latitude,
					geo_1.longitude, geo_1.latitude
			)*1000);
}

