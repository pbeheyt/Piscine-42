#pragma once

#include <string>

#include "ATarget.hpp"

class ATarget;

class ASpell {
  public:
    ASpell(std::string const &name, std::string const &effects);
	ASpell(ASpell const &rhs);
	ASpell &operator=(ASpell const &rhs);
	virtual ~ASpell();

    std::string const &getName(void) const;
    std::string const &getEffects(void) const;

	virtual ASpell *clone(void) const =0;

	void launch(ATarget const &target) const;

  protected:
    std::string name;
	std::string effects;
};

