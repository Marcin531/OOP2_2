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
std::string TextWrapper::wrapText(std::string textToWrap) {
    int i=0;
    std::string temp;
    while (textToWrap[i+1]){
        temp=textToWrap.substr(i+this->columns);
        textToWrap=textToWrap.substr(0,i+this->columns);
        textToWrap[i+this->columns]='\n';
        textToWrap=textToWrap.append(temp);
        std::cout<<textToWrap;

    }
}