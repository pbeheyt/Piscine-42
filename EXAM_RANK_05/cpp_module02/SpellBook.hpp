#pragma once

#include <string>
#include <iostream>
#include <map>

#include "ASpell.hpp"

class SpellBook {
  public:
	SpellBook(void);
	~SpellBook(void);

	void learnSpell(ASpell *spell);
	void forgetSpell(std::string const &spell);
	ASpell *createSpell(std::string const &spell);

  private:
	SpellBook(SpellBook const &rhs);
	SpellBook &operator=(SpellBook const &rhs);
	
	std::map<std::string, ASpell *>	_SpellBook;
};
