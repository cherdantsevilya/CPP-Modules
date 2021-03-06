#include "Character.hpp"
#include "MateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

int main()
{
    IMateriaSource* src = new MateriaSource();
//    std::cout << std::endl;
    src->learnMateria(new Ice());
    src->learnMateria(new Cure());
//    std::cout << std::endl;

    ICharacter* me = new Character("me");
//    std::cout << std::endl;

    AMateria* tmp;
    tmp = src->createMateria("ice");
    me->equip(tmp);
    tmp = src->createMateria("cure");
    me->equip(tmp);
//    std::cout << std::endl;

    ICharacter* bob = new Character("bob");
//    std::cout << std::endl;

    me->use(0, *bob);
    me->use(1, *bob);
//    std::cout << std::endl;

    delete bob;
    delete me;

    delete src;
    return 0;
}