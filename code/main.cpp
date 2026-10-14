#include <iostream>
#include "lib.h"

#ifndef APP_VERSION
#define APP_VERSION "1.0.0"
#endif

int main() {
    std::cout << getGreeting(APP_VERSION) << std::endl;
    return 0;
}