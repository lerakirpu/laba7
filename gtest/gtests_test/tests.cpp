#include "../tasks/task3.h"
#include "../tasks/task4.h"
#include "../tasks/task5.h"
#include "../tasks/task6.h"
#include "../tasks/task7.h"
#include "../tasks/task8.h"
#include <gtest/gtest.h>

TEST(Task3,SimpleEquations){
    EXPECT_EQ(solve_the_equation("2x=x"), "x = 0");
}
TEST(Task3, NoSolution) {
    EXPECT_EQ(solve_the_equation("x=x+2"), "No");
}
TEST(Task3, InfiniteSolutions) {
    EXPECT_EQ(solve_the_equation("-x=1"), "x = -1");
}

TEST(Task4,regular){
    EXPECT_EQ(minimum_difference(convert_minutes({"00:00","10:00","07:00"})), 180);
}
TEST(Task4,MinMaxDiff) {
    EXPECT_EQ(minimum_difference(convert_minutes({"01:00", "02:30"})), 90);
}
TEST(Task4, SameTime) {
    EXPECT_EQ(minimum_difference(convert_minutes({"13:00", "11:40","15:50"})), 80);
}

TEST(Task5, cheak1) {
    EXPECT_EQ(search(3, 18), false);
}
TEST(Task5, cheak2) {
    EXPECT_EQ(search(3, 7), true);
}
TEST(Task5, cheak3) {
    EXPECT_EQ(search(2, 9), true);
}

TEST(Task6, easy){
    EXPECT_EQ(solve_the_equation2(delete_whitespace("0")), 0);
}
TEST(Task6, middle){
    EXPECT_EQ(solve_the_equation2(delete_whitespace("1")), 1);
}
TEST(Task6, Hard){
    EXPECT_EQ(solve_the_equation2(delete_whitespace("(7)")), 7);
}

TEST(Task7, first){
    EXPECT_EQ(returncounter(1),2);
}
TEST(Task7, second){
    EXPECT_EQ(returncounter(6),5);
}
TEST(Task7, Third){
    EXPECT_EQ(returncounter(10),8);
}

TEST(Task8, one){
    std::vector<std::vector<int>> a = {{1,1},{2,2},{2,3},{3,3},{3,1},{1,3}};
    std::vector<std::vector<int>> b = {{1,1},{2,3},{3,3},{3,1},{1,3}};
    EXPECT_EQ(garden(a),b);
}
TEST(Task8, Square){
    std::vector<std::vector<int>> a = {{0,0}, {0,1}, {1,0}, {1,1}};
    std::vector<std::vector<int>> b = {{0,0}, {0,1}, {1,0}, {1,1}};
    EXPECT_EQ(garden(a), b);
}
