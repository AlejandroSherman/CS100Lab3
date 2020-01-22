#include "c-echo.h"

#include "gtest/gtest.h"

TEST(EchoTest, HelloWorld) {
    char* test_val[3]; test_val[0] = "./c-echo"; test_val[1] = "hello"; test_val[2] = "world";
    EXPECT_EQ("hello world", echo(3,test_val));
}
TEST(EchoTest, EmptyString) {
    char* test_val[1]; test_val[0] = "./c-echo";
    EXPECT_EQ("", echo(1,test_val));
}
TEST(EchoTest, NumericCharacters){
    char* test_val[5]; test_val[0] = "./c-echo"; test_val[1] = "1"; test_val[2] = "2"; test_val[3] = "3"; test_val[4] = "4";
    EXPECT_EQ("1 2 3 4", echo(5, test_val));
}
TEST(EchoTest, ThreeSpacesThenLetter){
    char* test_val[5];  test_val[0] = "./c-echo"; test_val[1] = " "; test_val[2] = " "; test_val[3] =  " "; test_val[4] =  "a";
   EXPECT_EQ("      a", echo(5,test_val));
}
TEST(EchoTest, SpecialChars){
    char* test_val[3]; test_val[0] = "./c-echo"; test_val[1] = "@"; test_val[2] = "%";
    EXPECT_EQ("@ %", echo(3,test_val));
}

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
