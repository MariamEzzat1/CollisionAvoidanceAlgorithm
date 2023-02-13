/*
 =====================================================================================
 Name          : CollisionAvoidanceAlgorithm.h
 Author        : Collision Avoidance Team
 Version       : Version 1.0
 Description   : Header file for Main Collision Avoidance Algorithm
 =====================================================================================
 */

#ifndef COLLISIONAVODIANCEALGORITHM_H
#define COLLISIONAVODIANCEALGORITHM_H

#include "utilities.h"
#include "CriticalDistances.h"

typedef enum { KEEP, RIGHT, LEFT } direction;
direction Dir = KEEP;

char OverTaking_Flag = 0;
char LaneChanging_First_Flag = 0;
char LaneChanging_Second_Flag = 0;

double SteeringAngle = 0;


int* CollisionAvoidanceAlgorithm()
{
}

#endif