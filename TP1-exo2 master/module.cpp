#include "module.h"
#include <iostream>
#include "prof.h"
using namespace std;

unsigned module::getNbHours() const
{
    return nbHours;
}

void module::setNbHours(const unsigned &value)
{
    nbHours = value;
}

module::module(const std::string &name_, const unsigned nbHours_) : name (name_), nbHours (nbHours_)
{
}

std::string module::getName() const
{
    return name;
}

void module::setName(const std::string &value)
{
    name = value;
}

void module::display() const
{
    cout << "Je suis : " << name << endl
         << "J'ai les profs : " << endl;
    for (const auto & prof : vProf)
        cout << '\t' << prof -> getName() << endl;
}


void module::addProf(prof* prof_)
{
    vProf.resize(vProf.size() + 1);
    vProf[vProf.size() - 1] = prof_;
}
