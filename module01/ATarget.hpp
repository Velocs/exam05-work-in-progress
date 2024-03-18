#pragma once
#include "ASpell.hpp"
#include <iostream>

class ASpell;

class ATarget{

    protected:
        std::string type;
    public:
        ATarget();
        ~ATarget();
        ATarget(ATarget const &copy);
        ATarget(std::string type);
        ATarget &operator=(ATarget const &target);
        std::string getType() const;
        virtual ATarget* clone() const = 0;
        void    getHitBySpell(ASpell const &spell) const;
};