#include <iostream>
#include "prof.h"
#include "module.h"
using namespace std;

int main()
{
    prof P1 ("Casali");
    prof P2 ("Laporte");
    module M2103 ("Bases de la programmation orientee objet", 60);
    module M2104 ("Bases de la conception orientée objet", 45);

    P1.addModule(&M2103);
    P1.addModule(&M2104);
    P1.display();

    M2103.setNbHours(10);
    P1.display();

    module M1 ("2105");
    M1.addProf(&P1);
    M1.addProf(&P2);
    M1.display();

    vector<prof> lesProfs(5) ;
    vector<module> lesModules (5) ;

    for (unsigned i(0) ; i < lesProfs.size() ; ++i)
    lesProfs[i] = prof (string (1, 'a' +i));


    for (unsigned i(0) ; i < lesModules.size() ; ++i)
    lesModules[i] = module (string (1, 'A' +i));

    for (prof & unProf : lesProfs)
        for (module & unModule : lesModules)
            unProf.addModule(&unModule);
    for (module & unModule : lesModules)
            for (prof & unProf : lesProfs)
                unModule.addProf(&unProf);

    for (const prof & unProf : lesProfs)
        unProf.display() ;
    for (const module & unModule : lesModules)
        unModule.display();


    return 0;
}
