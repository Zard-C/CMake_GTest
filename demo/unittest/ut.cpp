#include "foo.hpp"
#include <gtest/gtest.h>

TEST(foo, ut_ctor)
{
    foo f; 
    EXPECT_EQ(f.get(), 0)
    <<"TEST1, ut_cotr";
}

TEST(foo, ut_operator)
{
    foo f(1); 
    foo g; 
    foo h ; 

    EXPECT_LT(g, f); 
    EXPECT_GT(f, g); 
    EXPECT_EQ(g, h);
}

TEST(foo, lambda)
{
    EXPECT_EQ(true, false) << "Lambda";
    auto f = [](int val) ->int { return val; };
    int val;  
    EXPECT_EQ(f(val), val);
}


int main(int argc, char** argv)
{
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}