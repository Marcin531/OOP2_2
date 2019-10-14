#include <TextWrapper.h>

//
// Created by student on 14.10.2019.
//
TextWrapper::TextWrapper(){

};

TextWrapper::TextWrapper(int columns) {
    this->columns=columns;
}

int TextWrapper::getNumberOfColumns() {
    return columns;
}
