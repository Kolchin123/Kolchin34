#include "Electrogadget.h"
using namespace std;
Electrogadget::Electrogadget()
{
    this->model="SL-57";
    this->serialNumber=78909234;
}
Electrogadget::Electrogadget(string const & model,unsigned int const serialNumber)
{
    this->model=model;
    this->serialNumber=serialNumber;
}
Electrogadget::Electrogadget(Electrogadget const & electrogadget )
{
    this->model=electrogadget.model;
    this->serialNumber=electrogadget.serialNumber;
}
const string& Electrogadget::getModel()const
{
    return model;
}
const unsigned int Electrogadget::getSerialNumber()const
{
    return serialNumber;
}
 void Electrogadget::setModel (string const& model)
{
    this->model=model;
}
void Electrogadget::setSerialNumver(unsigned int const serialNumber)
{
    this->serialNumber=serialNumber;
}
Electrogadget& Electrogadget::operator=(Electrogadget const& electrogadget)
{
    this->model=electrogadget.model;
    this->serialNumber=electrogadget.serialNumber;
    return *this;
}
