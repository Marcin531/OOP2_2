//
// Created by student on 14.10.2019.
//

#ifndef INC_02_TDD_TEXTWRAPPER_H
#define INC_02_TDD_TEXTWRAPPER_H

#include <iostream>

class TextWrapper{
    int columns=1;
public:
    TextWrapper();
    TextWrapper(int columns);
    int getNumberOfColumns();
    std::string wrapText(std::string textToWrap);
};
#endif //INC_02_TDD_TEXTWRAPPER_H
