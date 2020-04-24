#pragma once
#include<string>
using namespace std;
class Electrogadget
{
protected:
    string model;
    unsigned int serialNumber;
public:
    Electrogadget();
    Electrogadget(string const & model,unsigned int const serialNumber );
    Electrogadget(Electrogadget const & electrogadget );

    const string& getModel()const;
    const unsigned int getSerialNumber()const;
    void setModel (string const& model);
    void setSerialNumver(unsigned int const serialNumber);

    virtual void print()=0;
    Electrogadget& operator=(Electrogadget const& electrogadget);


};
