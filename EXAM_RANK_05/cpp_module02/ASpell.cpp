#include "ASpell.hpp"

ASpell::ASpell(std::string const &name, std::string const &effects) :
	name(name),
	effects(effects) {}

ASpell::ASpell(ASpell const &rhs) {
	*this = rhs;
}

ASpell &ASpell::operator=(ASpell const &rhs) {
	if (this != &rhs) {
		name = rhs.name;
		effects = rhs.effects;
	}
	return *this;
}

ASpell::~ASpell() {}


std::string const &ASpell::getName(void) const {
  return this->name;
}

std::string const &ASpell::getEffects(void) const {
  return this->effects;
}

void ASpell::launch(ATarget const &target) const {
	target.getHitBySpell(*this);
}