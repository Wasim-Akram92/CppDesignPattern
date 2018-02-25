#include"Robot.h"

Robot::Robot(){ instance = std::unique_ptr<RobotImpl>(new RobotImpl()); }
Robot::~Robot(){}

void Robot::run(){
	instance->run();
}

void Robot::attack(){
	instance->attack();
}
