#pragma once
#include<string>
#include"Electrogadget.h"
using namespace std;
class Tablet:public Electrogadget
{
protected:
    string wifimodule;
public:
    Tablet();
    Tablet(string const & model,unsigned int const serialNumber,string const& wifimodule );
    Tablet(Tablet const & tablet );

    const string& getwifimodule()const;
    void setwifimodule (string const& wifimodule);
    void print();
    Tablet& operator=(Tablet const& tablet);
}  ;

