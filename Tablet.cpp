#include"Tablet.h"
#include<iostream>
using namespace std;
Tablet::Tablet():Electrogadget()
{
    this->wifimodule="Included";
}
Tablet::Tablet(string const & model,unsigned int const serialNumber,string const& wifimodule ):
    Electrogadget(model,serialNumber)
{
    this->wifimodule=wifimodule;
}
Tablet::Tablet(Tablet const & tablet ):Electrogadget(tablet)
{
    this->wifimodule=tablet.wifimodule;
}
const string& Tablet::getwifimodule()const
{
    return wifimodule;
}
void Tablet::setwifimodule (string const& wifimodule)
{
    this->wifimodule=wifimodule;
}
Tablet& Tablet::operator=(Tablet const& tablet)
{
    Electrogadget::operator=(tablet);
    this->wifimodule=tablet.wifimodule;
    return *this;
}
void Tablet::print()
{
    cout<<endl<<"Model\t"<<this->model;
    cout<<endl<<"SerialNumber\t"<<this->serialNumber;
    cout<<endl<<"wifimodule\t"<<this->wifimodule;
}
