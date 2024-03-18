#include <iostream>
#include <map>
#include "ASpell.hpp"
#include "ATarget.hpp"

class Warlock {

	private :
		Warlock & operator=(Warlock const & rhs);
		Warlock(Warlock const & obj);
		Warlock();
		std::string _name;
		std::string _title;
		std::map < std::string, ASpell * > _SpellBook;
		
	public :

		Warlock(std::string name, std::string title);
		~Warlock();
		std::string const & getName() const;
		std::string const & getTitle() const;
		void	setTitle(std::string const & str);
		void	introduce() const;
		void	learnSpell(ASpell* spell);
		void	forgetSpell(std::string spellname);
		void	launchSpell(std::string spellname, ATarget const &target);
};