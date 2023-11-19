//
// Created by Alibi on 19.11.2023.
//

#ifndef UNTITLED3_ADAPTER_H
#define UNTITLED3_ADAPTER_H
#include <iostream>
#include "Factory.h"

// Input Adapter
struct InputSystem {
     static void handleInput() {
        std::cout << "Handling user input\n";
    }
};

struct InputAdapter :  GameObject {
public:
    InputAdapter() = default;

    void render() override {
        // Render method adapted to handle input
        InputSystem::handleInput();
    }
};

#endif //UNTITLED3_ADAPTER_H
