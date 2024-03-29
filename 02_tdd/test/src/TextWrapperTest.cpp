#include "TestIncludes.h"
#include "Dummy.h"
#include "TextWrapper.h"
//plik z testami jednostkowymi

//napierw test, ktory nie dziala nalezy dodac, zapisac sobie zmiany, dodawac commity.
//


TEST(TextWrapper, CreateInstance) { // pierwsze pole to nazwa klasy, ktora testuje, a drugie to co chce prztestowac
    auto wrapper = TextWrapper{};
}

TEST(TextWrapper, HasColumnsGetter) { // czy wrapper posiada metode umozliwiajaca wyciagniecie ilosci kolumn
    auto wrapper=TextWrapper(10);
    EXPECT_EQ(10,wrapper.getNumberOfColumns());
}

TEST(TextWrapper, CanWrapTextWithOneColumn){
    auto wrapper=TextWrapper(1);
    EXPECT_EQ("a",wrapper.wrapText("a"));
}

TEST(TextWrapper, CanWrapLongerTextWithOneColumn){
    auto wrapper= TextWrapper();
    EXPECT_EQ("a\nb",wrapper.wrapText("ab"));
}

/*TEST(TextWrapper,CanWrapLongerTextWithSpacesWithOneColumn){
    auto wrapper= TextWrapper();
    EXPECT_EQ("a\nb\nc",wrapper.wrapText("ab c"));
}*/


