#pragma once

#include <string>
#include <iostream>
#include <map>

#include "ASpell.hpp"
#include "SpellBook.hpp"
#include "ATarget.hpp"

class Warlock {
  public:
	Warlock(std::string const &name, std::string const &title);
	~Warlock(void);
  
	std::string const &getName() const;
	std::string const &getTitle() const;
	void setTitle(std::string const &title);

	void introduce(void) const;

	void learnSpell(ASpell *spell);
	void forgetSpell(std::string spell);
	void launchSpell(std::string spell, ATarget const &target);

  private:
	Warlock(void);
	Warlock(Warlock const &rhs);
	Warlock &operator=(Warlock const &rhs);
	
	std::string	name;
	std::string	title;
	SpellBook spellBook;
};
