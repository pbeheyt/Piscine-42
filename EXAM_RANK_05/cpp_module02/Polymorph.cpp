#include "Polymorph.hpp"

Polymorph::Polymorph() : ASpell("Polymorph", "Polymorph") {}

Polymorph::~Polymorph() {}

ASpell *Polymorph::clone() const {
	return new Polymorph();
}