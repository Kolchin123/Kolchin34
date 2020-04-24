#include <iostream>
#include"Electrogadget.h"
#include"Notebook.h"
#include"Smartphone.h"
#include"Smartwatch.h"
#include"Tablet.h"
using namespace std;

int main()
{
    Notebook lenovo ("Lenovo",01,"Intel");
    Notebook asus;
    asus.print();
    asus=lenovo;
    asus.print();

    Smartphone iphone("Iphone",02,"Apple");
    Smartphone samsung;
    samsung.print();
    samsung=iphone;
    samsung.print();

    Tablet ipad ("IPad",03,"Included");
    Tablet txt;
    txt.print();
    txt=ipad;
    txt.print();

    Smartwatch iwatch ("IWatch",04,"Large");
    Smartwatch xiaomi;
    xiaomi.print();
    xiaomi=iwatch;
    xiaomi.print();

    return 0;
}
