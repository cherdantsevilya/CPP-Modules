#ifndef DESKTOP_CURE_H
#define DESKTOP_CURE_H

#include "AMateria.hpp"

class Cure : public AMateria {

public:
	Cure();
	Cure(const Cure& other);
	~Cure();
	Cure& operator=(const Cure& other);
    AMateria* clone() const;
    void use(ICharacter& target);

};

#endif
