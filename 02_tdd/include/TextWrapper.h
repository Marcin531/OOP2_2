//
// Created by student on 14.10.2019.
//

#ifndef INC_02_TDD_TEXTWRAPPER_H
#define INC_02_TDD_TEXTWRAPPER_H

#include <iostream>

class TextWrapper{
    int columns=0;
public:
    TextWrapper();
    TextWrapper(int columns);
    int getNumberOfColumns();
};
#endif //INC_02_TDD_TEXTWRAPPER_H
