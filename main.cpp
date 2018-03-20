#include <iostream>
#include <iomanip>


using namespace std;
namespace {
class Duree {
private :
    unsigned long long myDuree ;
    unsigned long long  mySeconds ;
    unsigned long long  myMinutes ;
    unsigned long long  myHours ;
    unsigned long long  myDays ;
    void normaliser () noexcept ;

public :
    Duree (const unsigned & d = 0) noexcept ;
    unsigned long long getDuree() const noexcept ;
    void display () const ;
    void inc (const unsigned long long & delta) noexcept ;
    void dec (const unsigned long long & delta) noexcept ;
}; //Duree
void Duree::normaliser() noexcept
{
    myDays = myDuree / (60*60*24) ;
    myHours = (myDuree - myDays * 60*60*24) / (60*60) ;
    myMinutes = (myDuree - (myDays * 60*60*24) - (myHours * 60*60)) / 60 ;
    mySeconds = myMinutes % 60 ;
}

Duree::Duree (const unsigned & myDuree_) noexcept : myDuree(myDuree_) {
    normaliser () ;
    }

    void Duree::display() const
    {
        cout << setw(4) << myDays << "jours "
             << setw(4) << myHours << "heures "
             << setw(4) << myMinutes << "minutes "
             << setw(4) << mySeconds << "secondes " ;

    }

    void Duree::inc(const unsigned long long &delta) noexcept
    {
     myDuree += delta ;
     normaliser () ;
    }

    void Duree::dec(const unsigned long long &delta) noexcept
    {
     if (delta > myDuree) return ;
     myDuree -= delta ;
     normaliser () ;
    }

}
int main()
{
    Duree D2 (60) ;
    D2.display();
    return 0;
}
