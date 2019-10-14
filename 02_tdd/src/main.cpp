#include <iostream>
#include <TextWrapper.h>
#include "Dummy.h"

//Zadanie
//do klasy i kodu

//jak skompilowac plik -> plik readme.md
int main(int argc, char* argv[])
{
    auto wrapper = TextWrapper(1);
    std::cout<<wrapper.wrapText("ab");
    return 0;
}
