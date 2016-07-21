#pragma once
#include "standardIncludes.h"
#include "sensor_msgs/Imu.h"
#include "debugOutput.h"
#include "pose.h"

void imuCallback(const sensor_msgs::Imu &imudata);
void imuCompensation(const Vector3d &targetAccel, double targetAngularVel, Vector3d *deltaAngle, Vector3d *deltaPos, double pIncrement, double timeDelta);
void setCompensationDebug(DebugOutput &debug);
