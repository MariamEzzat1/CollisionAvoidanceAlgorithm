/*
 =================================================================================
 Name          : utilities.c
 Author        : Collision Avoidance Team
 Version       : Version 1.0
 Description   : Source file for utilities which we will use in the main algorithm
 =================================================================================
 */

#include "utilities.h"

double DegToRad(double AngleInDegree)
{
	double AngleInRad = AngleInDegree * (pi / 180.00);
	return AngleInRad;
}

double GetHorizontalDistance(double DiagonalDistance, double Angle)
{
	double AngleInRad = DegToRad(Angle);
	double HorizontalDistance = DiagonalDistance * cos(AngleInRad);
	return HorizontalDistance;
}

