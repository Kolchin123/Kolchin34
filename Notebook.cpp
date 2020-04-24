#include"Notebook.h"
#include<iostream>
using namespace std;
Notebook::Notebook():Electrogadget()
{
    this->creator="ZALMAN";
}
Notebook::Notebook(string const & model,unsigned int const serialNumber,string const& creator ):
    Electrogadget(model,serialNumber)
{
    this->creator=creator;
}
Notebook::Notebook(Notebook const & notebook ):Electrogadget(notebook)
{
    this->creator=notebook.creator;
}
const string& Notebook::getcreator()const
{
    return creator;
}
void Notebook::setcreator (string const& creator)
{
    this->creator=creator;
}
Notebook& Notebook::operator=(Notebook const& notebook)
{
    Electrogadget::operator=(notebook);
    this->creator=notebook.creator;
    return *this;
}
void Notebook::print()
{
    cout<<endl<<"Model\t"<<this->model;
    cout<<endl<<"SerialNumber\t"<<this->serialNumber;
    cout<<endl<<"creator\t"<<this->creator;
}
