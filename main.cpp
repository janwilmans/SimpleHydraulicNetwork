#include <exception>
#include <iostream>

#include "SimpleHydraulicLib/process.h"

int main() {
    try {
        process();
    } catch (const std::exception &exception) {
        std::cerr << exception.what() << '\n';
        throw;
    }
    return 0;
}
