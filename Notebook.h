#pragma once
#include<string>
#include"Electrogadget.h"
using namespace std;
class Notebook:public Electrogadget
{
protected:
    string creator;
public:
    Notebook();
    Notebook(string const & model,unsigned int const serialNumber,string const& creator );
    Notebook(Notebook const & notebook );

    const string& getcreator()const;
    void setcreator (string const& creator);
    void print();
    Notebook& operator=(Notebook const& notebook);
}  ;
