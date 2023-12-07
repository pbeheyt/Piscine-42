#include "Dummy.hpp"

Dummy::Dummy() : ATarget("Inconspicuous Red-brick Wall") {}

Dummy::~Dummy() {}

ATarget *Dummy::clone() const {
	return new Dummy();
}