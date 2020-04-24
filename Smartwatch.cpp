#include"Smartwatch.h"
#include<iostream>
using namespace std;
Smartwatch::Smartwatch():Electrogadget()
{
    this->displaysize="medium";
}
Smartwatch::Smartwatch(string const & model,unsigned int const serialNumber,string const& displaysize ):
    Electrogadget(model,serialNumber)
{
    this->displaysize=displaysize;
}
Smartwatch::Smartwatch(Smartwatch const & smartwatch ):Electrogadget(smartwatch)
{
    this->displaysize=smartwatch.displaysize;
}
const string& Smartwatch::getDisplaysize()const
{
    return displaysize;
}
void Smartwatch::setDisplaysize (string const& displaysize)
{
    this->displaysize=displaysize;
}
Smartwatch& Smartwatch::operator=(Smartwatch const& smartwatch)
{
    Electrogadget::operator=(smartwatch);
    this->displaysize=smartwatch.displaysize;
    return *this;
}
void Smartwatch::print()
{
    cout<<endl<<"Model\t"<<this->model;
    cout<<endl<<"SerialNumber\t"<<this->serialNumber;
    cout<<endl<<"displaysize\t"<<this->displaysize;
}
