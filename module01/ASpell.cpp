#include "ASpell.hpp"

ASpell::ASpell()
{
    ;
}

ASpell::~ASpell()
{
    ;
}

ASpell::ASpell(std::string name, std::string effects)
{
    this->name = name;
    this->effects = effects;
}

ASpell::ASpell(ASpell const &copy)
{
    *this = copy;
}

ASpell &ASpell::operator=(ASpell const &target)
{
    this->name = target.getName();
    this->effects = target.getEffects();
    return *this;
}

std::string ASpell::getEffects() const
{
    return(this->effects);
}

std::string ASpell::getName() const
{
    return(this->name);
}

void ASpell::launch(ATarget const &target) const
{
    target.getHitBySpell(*this);
}