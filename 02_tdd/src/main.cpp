#include <iostream>
#include "Dummy.h"

//Zadanie
//do klasy i kodu

//jak skompilowac plik -> plik readme.md
int main(int argc, char* argv[])
{
    auto dummy = Dummy{};
    std::cout << dummy.hello() << std::endl;
    return 0;
}
