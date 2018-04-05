#include <iostream>

#include "prof.h"
#include "module.h" //!!a ne pas oublier ici

using namespace std;

prof::prof(const std::string &prof_) : name (prof_)
{

}

void prof::addModule(module* module_)
{
    vMod.resize(vMod.size() + 1);
    vMod[vMod.size() - 1] = module_;
}

unsigned prof::getNbTeachingHours() const
{
    unsigned nbTeachingHours (0);
    for (const module*  mod : vMod)
        nbTeachingHours += mod->getNbHours();

    return nbTeachingHours;
}

void prof::display() const
{
    cout << "Je suis : " << name << endl
         << "J'enseigne les modules : " << endl;
    for (const auto & mod : vMod)
        cout << '\t' << mod->getName() << endl;
    cout << "Nb heures enseignees : " << getNbTeachingHours() << endl;
}



std::string prof::getName() const
{
    return name;
}

void prof::setName(const std::string &value)
{
    name = value;
}


