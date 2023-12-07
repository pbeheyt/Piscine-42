/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Warlock.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbeheyt <pbeheyt@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 00:46:53 by pbeheyt           #+#    #+#             */
/*   Updated: 2023/12/07 01:05:42 by pbeheyt          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Warlock.hpp"

Warlock::Warlock(void) {}

Warlock::Warlock(std::string const &name, std::string const &title) :
	name(name),
	title(title) {
	std::cout << name << ": This looks like another boring day." << std::endl;
}
	
Warlock::Warlock(Warlock const &rhs) {
	*this = rhs;
}

Warlock &Warlock::operator=(Warlock const &rhs) {
	if (this != &rhs) {
		this->name = rhs.name;
		this->title = rhs.title;
	}
	return *this;
}

Warlock::~Warlock(void) {
	std::cout << name << ": My job here is done!" << std::endl;
}

std::string const &Warlock::getName() const {
	return name;
}
std::string const &Warlock::getTitle() const {
	return title;
}
void Warlock::setTitle(std::string const &title) {
	this->title = title;
}

void Warlock::introduce(void) const {
	std::cout << name << ": I am " << name << ", " << title << "!" << std::endl;
}

void Warlock::learnSpell(ASpell *spell) {
	if (spell) {
		spellBook.learnSpell(spell);
	}
}

void Warlock::forgetSpell(std::string spellName) {
	spellBook.forgetSpell(spellName);
}

void Warlock::launchSpell(std::string spellName, ATarget const &target) {
	ASpell *spell = spellBook.createSpell(spellName);
	spell->launch(target);
}