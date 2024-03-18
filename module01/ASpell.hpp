#pragma once
#include "ATarget.hpp"
#include <iostream>

class ATarget;

class ASpell {

    protected:
            std::string name;
            std::string effects;
    public:
            ASpell();
            ~ASpell();
            ASpell(ASpell const &copy);
            ASpell& operator=(ASpell const &target);
            std::string getName() const;
            std::string getEffects() const;
            virtual ASpell* clone() const = 0;
            ASpell(std::string name, std::string effects);
            void launch(ATarget const &target) const;
};