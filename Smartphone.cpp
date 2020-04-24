#include"Smartphone.h"
#include<iostream>
using namespace std;
Smartphone::Smartphone():Electrogadget()
{
    this->typescreen="touchscreen";
}
Smartphone::Smartphone(string const & model,unsigned int const serialNumber,string const& typescreen ):\
    Electrogadget(model,serialNumber)
{
    this->typescreen=typescreen;
}
Smartphone::Smartphone(Smartphone const & smartphone ):Electrogadget(smartphone)
{
    this->typescreen=smartphone.typescreen;
}
const string& Smartphone::getTypescreen()const
{
    return typescreen;
}
void Smartphone::setTypescreen (string const& typescreen)
{
    this->typescreen=typescreen;
}
Smartphone& Smartphone::operator=(Smartphone const& smartphone)
{
    Electrogadget::operator=(smartphone);
    this->typescreen=smartphone.typescreen;
    return *this;
}
void Smartphone::print()
{
    cout<<endl<<"Model\t"<<this->model;
    cout<<endl<<"SerialNumber\t"<<this->serialNumber;
    cout<<endl<<"Typescreen\t"<<this->typescreen;
}
