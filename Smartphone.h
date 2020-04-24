#pragma once
#include<string>
#include"Electrogadget.h"
using namespace std;
class Smartphone:public Electrogadget
{
protected:
    string typescreen;
public:
    Smartphone();
    Smartphone(string const & model,unsigned int const serialNumber,string const& typescreen );
    Smartphone(Smartphone const & smartphone );

    const string& getTypescreen()const;
    void setTypescreen (string const& typescreen);
    void print();
    Smartphone& operator=(Smartphone const& smartphone);
}  ;
