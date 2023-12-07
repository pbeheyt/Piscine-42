#include "ATarget.hpp"

ATarget::ATarget(std::string const &type) :
	type(type) {}

ATarget::ATarget(ATarget const &rhs) {
	*this = rhs;
}

ATarget &ATarget::operator=(ATarget const &rhs) {
	if (this != &rhs) {
		type = rhs.type;
	}
	return *this;
}

ATarget::~ATarget() {}


std::string const &ATarget::getType(void) const {
  return this->type;
}

void ATarget::getHitBySpell(ASpell const &spell) const {
	std::cout << this->type << " has been " << spell.getEffects() << "!" << std::endl;
}
