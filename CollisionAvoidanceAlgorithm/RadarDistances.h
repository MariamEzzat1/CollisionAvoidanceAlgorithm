/*
 ============================================================================
 Name          : RadarDistances.h
 Author        : Collision Avoidance Team
 Version       : Version 1.0
 Description   : Header file for the radar readings calculations
 ============================================================================
 */
#ifndef RADARDISTANCES_H
#define RADARDISTANCES_H

#include <stdio.h>
#include <stdlib.h>
#include <math.h>


/*
* Signals for Front Radar
*/
typedef struct
{
	double theta;  //azimuth angle
	double doppler_velocity;
	double range;
} FrontRadar;
/*
* Signals for Right Front Radar
*/
typedef struct
{
	double theta;  //azimuth angle
	double doppler_velocity;
	double range;
} RightFrontRadar;
/*
* Signals for Left Front Radar
*/
typedef struct
{
	double theta;  //azimuth angle
	double doppler_velocity;
	double range;
} LeftFrontRadar;
/*
* Signals for Right Back Radar
*/
typedef struct
{
	double theta;  //azimuth angle
	double doppler_velocity;
	double range;
} RightBackRadar;
/*
* Signals for Left Back Radar
*/
typedef struct
{
	double theta;  //azimuth angle
	double doppler_velocity;
	double range;
} LeftBackRadar;



/*
* Description : Calculate the distance between our car and the front car
*/
double GetDistanceFrontRadar();
/*
* Description : Calculate the distance between our car and the front car at the right lane 
*/
double GetDistanceRightFrontRadar();
/*
* Description : Calculate the distance between our car and the front car at the left lane
*/
double GetDistanceLeftFrontRadar();
/*
* Description : Calculate the distance between our car and the back car at the right lane
*/
double GetDistanceRightBackRadar();
/*
* Description : Calculate the distance between our car and the back car at the left lane
*/
double GetDistanceLeftBackRadar();


#endif