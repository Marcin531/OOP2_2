#include <gtest/gtest.h>

class Dummy
{
public:
    int add(int a, int b)
    {
        return a | b; // Fancy adding :)
    }
};

TEST(Dummy, Add)
{
    auto dummy = Dummy{};
    EXPECT_EQ(4, dummy.add(1, 3));
}