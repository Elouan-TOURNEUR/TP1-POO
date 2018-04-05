#ifndef MODULE_H
#define MODULE_H

#include <string>
#include <vector>
//#include "prof.h" !! ne pas faire cet include sinon ça fout le merdier de partout

class prof;
class module
{
    std::string name;
    unsigned nbHours;
    std::vector<prof*> vProf;
public:
    module(const std::string & name_ = std::string (), const unsigned nbHours_ = 0);
    std::string getName() const;
    void setName(const std::string &value);
    void addProf (prof* prof_);
    unsigned getNbHours() const;
    void setNbHours(const unsigned &value);
    void display() const;
};

#endif // MODULE_H
