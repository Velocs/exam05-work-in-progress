#include "ATarget.hpp"

ATarget::ATarget()
{
    ;
}

ATarget::~ATarget()
{
    ;
}

ATarget &ATarget::operator=(ATarget const &target)
{
    this->type = target.getType();
    return *this;
}

ATarget::ATarget(ATarget const &copy)
{
    *this = copy;
}


std::string ATarget::getType() const
{
    return (this->type);
}

void ATarget::getHitBySpell(ASpell const &spell) const
{
    std::cout << getType() << " has been " << spell.getEffects() << "!" << std::endl;
}