#include <gtest/gtest.h>
#include "foo.cpp"
#include "func1.cpp"

TEST(FooTest, HandleNoneZeroInput)
{
	    EXPECT_EQ(2, Foo(4, 10));
		    EXPECT_EQ(6, Foo(30, 18));
	    EXPECT_EQ(0, Foo(0,0));
}



TEST(Foo1Test, HandleNoneZeroInput)
{
            EXPECT_EQ(2, Foo1(4, 10));
                    EXPECT_EQ(6, Foo1(30, 18));
}

int main(int argc, char* argv[])
{
	    testing::InitGoogleTest(&argc, argv);
		return RUN_ALL_TESTS();
}

