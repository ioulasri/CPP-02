#include <iostream>
#include <iomanip>
#include <cstring>

void printFloatBits(float f) {
    unsigned int bits;
    std::memcpy(&bits, &f, sizeof(float));
    std::cout << "Float: " << f << "\nBits : 0x" 
              << std::hex << std::setw(8) << std::setfill('0') << bits << "\n";
}

int main() {
    printFloatBits(5.0f);
    printFloatBits(0.1f);
    return 0;
}
