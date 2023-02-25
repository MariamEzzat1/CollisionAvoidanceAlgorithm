#include "CollisionAvoidanceAlgorithm.h"
/*
 =====================================================================================
 Name          : CollisionAvoidanceAlgorithm.c
 Author        : Collision Avoidance Team
 Version       : Version 1.0
 Description   : Source file for Main Collision Avoidance Algorithm
 =====================================================================================
 */

int* CollisionAvoidanceAlgorithm()
{
	FrontRadar       RF;
	RightFrontRadar  RFR;
	LeftFrontRadar   LFR;
	RightBackRadar   RBR;
	LeftBackRadar    LBR;
	if (GetDistanceFrontRadar(RF) == GetForwardDistance(RF))
	{
		if (((GetSafeDistanceLeftBackRadar(LBR)) >= (GetDistanceLeftBackRadar(LBR))) && (GetSafeDistanceLeftFrontRadar(LFR) >= GetDistanceLeftFrontRadar(LFR))) // check to enter manuever process or not 
		{
			/*LaneChanging_First_Flag = 1;*/
			SteeringAngle = GetTriangleAngleInRad(GetForwardDistance(RF), ROAD_WIDTH) + DegToRad(SAFE_FACTOR_ANGLE); // initial angle
			//while (GetDistanceRightFrontRadar(RFR) <= GetSafeDistanceRightFrontRadar(RFR)) // Check right front has the safe distance
			//{
			//	//while (SteeringAngle <= 60)
			//	//	//SteeringAngle = GetTriangleAngleInRad(GetForwardDistance(RF), ROAD_WIDTH);
			//	//{
			//	//	SteeringAngle += DegToRad(SAFE_FACTOR_ANGLE);
			//	//}
			//}
			double PassDistance = 
		}
		else
		{
			while (GetDistanceFrontRadar(RF) <= GetForwardDistance(RF))
			{
				double BrakeF = BrakeForce(RF); // Send it to control team 
			} 
		}
	}
}
