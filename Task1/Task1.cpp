#include <iostream>
#include <array>
#include <algorithm>
#include "Atm.h"

int main()
{
    std::array<Atm, 5> atms =
    {
        Atm("000000001", "Moscow"),
        Atm("000000002", "St.-Petersburg"),
        Atm("000000003", "Kazan"),
        Atm("000000004", "Vladivostok"),
         Atm("000000005", "Ekaterinburg")
    };

    std::for_each(atms.begin(), atms.end(), print);

    return 0;
};
