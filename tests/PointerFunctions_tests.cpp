#include <gtest/gtest.h>
#include <array>
#include <cstdint>

std::array<uint8_t, 4> floatToBytes(float);
TEST(FloatToBytesTest, ConvertsCorrectly) {
    float input = 3.14f;
    std::array<uint8_t, 4> bytes = floatToBytes(input);

    
    EXPECT_EQ(bytes.size(), 4);


    uint8_t* raw = reinterpret_cast<uint8_t*>(&input);
    for (int i = 0; i < 4; ++i) {
        EXPECT_EQ(bytes[i], raw[i]);
    }
}

// Forward declare
int callFunctionPointer(int (*func)(int), int value);

// Example functions to pass in
int square(int x) { return x * x; }
int negate(int x) { return -x; }

TEST(FunctionPointerTest, CallsCorrectFunction) {
    EXPECT_EQ(callFunctionPointer(square, 4), 16);
    EXPECT_EQ(callFunctionPointer(negate, 4), -4);
}