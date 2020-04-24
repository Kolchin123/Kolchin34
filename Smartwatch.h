#pragma once
#include<string>
#include"Electrogadget.h"
using namespace std;
class Smartwatch:public Electrogadget
{
protected:
    string displaysize;
public:
    Smartwatch();
    Smartwatch(string const & model,unsigned int const serialNumber,string const& displaysize );
    Smartwatch(Smartwatch const & smartwatch );

    const string& getDisplaysize()const;
    void setDisplaysize (string const& displaysize);
    void print();
    Smartwatch& operator=(Smartwatch const& smartwatch);
}  ;
