#pragma once

#include <string>
#include <iostream>
#include <map>

#include "ATarget.hpp"

class TargetGenerator {
  public:
	TargetGenerator(void);
	~TargetGenerator(void);

	void learnTargetType(ATarget *target);
	void forgeTargetType(std::string const &target);
	ATarget *createTarget(std::string const &target);

  private:
	TargetGenerator(TargetGenerator const &rhs);
	TargetGenerator &operator=(TargetGenerator const &rhs);
	
	std::map<std::string, ATarget *>	_targets;
};
