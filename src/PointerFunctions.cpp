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

int callFunctionPointer(int (*func)(int), int value) {
    return func(value);
}

std::array<uint8_t, 4> getSelectedBytesFromDouble(double value) {
    std::array<uint8_t, 4> selectedBytes;
    uint8_t* raw = reinterpret_cast<uint8_t*>(&value);
    
    selectedBytes[0] = raw[0];
    selectedBytes[1] = raw[2];
    selectedBytes[2] = raw[4];
    selectedBytes[3] = raw[6];

    return selectedBytes;
}