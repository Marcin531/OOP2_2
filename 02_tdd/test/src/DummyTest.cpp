#include "TestIncludes.h"
#include "Dummy.h"
//plik z testami jednostkowymi

//napierw test, ktory nie dziala nalezy dodac, zapisac sobie zmiany, dodawac commity.
//
TEST(Dummy, Hello) {

    Dummy dummy{};
    ASSERT_EQ("Hello!", dummy.hello());
}
