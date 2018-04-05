#ifndef PROF_H
#define PROF_H

#include <string>
#include <vector>
//#include "module.h" !! ne pas faire cet include sinon ça fout le merdier de partout
//https://stackoverflow.com/questions/4964482/how-to-create-two-classes-in-c-which-use-each-other-as-data

class module;
class prof
{
    std::string name;
    std::vector<module*> vMod;
public:
    prof(const std::string & prof_ = std::string ());

    void addModule (module*  module_);
    unsigned getNbTeachingHours() const;
    void display() const;

    std::string getName() const;
    void setName(const std::string &value);

};

#endif // PROF_H
