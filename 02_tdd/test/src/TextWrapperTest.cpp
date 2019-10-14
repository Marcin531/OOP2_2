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


