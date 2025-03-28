#include <array>
#include <cstdint>


std::array<uint8_t, 4> floatToBytes(float value) {
    std::array<uint8_t, 4> bytes;
    uint8_t* raw = reinterpret_cast<uint8_t*>(&value);
    for (int i = 0; i < 4; ++i) {
        bytes[i] = raw[i];
    }
    return bytes;
}