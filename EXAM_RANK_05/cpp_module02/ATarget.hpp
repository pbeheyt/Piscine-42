#pragma once

#include <string>
#include <iostream>

#include "ASpell.hpp"

class ASpell;

class ATarget {
  public:
    ATarget(std::string const &type);
	ATarget(ATarget const &rhs);
	ATarget &operator=(ATarget const &rhs);
	virtual ~ATarget();

    std::string const &getType(void) const;

	virtual ATarget *clone(void) const =0;

	void getHitBySpell(ASpell const &spell) const;

  protected:
    std::string type;
};

