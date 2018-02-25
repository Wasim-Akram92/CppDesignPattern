#pragma once
#include "RobotImpl.h"
#include <memory>

class Robot{
private:
	std::unique_ptr<RobotImpl> instance;

public:
	Robot();
	~Robot();	
	void run();
	void attack();
};
