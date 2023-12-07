#include "BrickWall.hpp"

BrickWall::BrickWall() : ATarget("Target Practice BrickWall") {}

BrickWall::~BrickWall() {}

ATarget *BrickWall::clone() const {
	return new BrickWall();
}