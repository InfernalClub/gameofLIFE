#include <iostream>
#include "Sistema.h"

int main()
{
    Sistema* sys = new Sistema();
    sys->Menu();
    delete sys;
}
