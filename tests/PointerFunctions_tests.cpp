#include <gtest/gtest.h>
#include <array>



TEST(FloatToBytesTest, ConvertsCorrectly) {
    float input = 3.14f;
    std::array<uint8_t, 4> bytes = floatToBytes(input);

    
    EXPECT_EQ(bytes.size(), 4);


    uint8_t* raw = reinterpret_cast<uint8_t*>(&input);
    for (int i = 0; i < 4; ++i) {
        EXPECT_EQ(bytes[i], raw[i]);
    }
}