//
// Created by Alibi on 19.11.2023.
//

#ifndef UNTITLED3_SINGLETON_H
#define UNTITLED3_SINGLETON_H
#include <iostream>

class GameEngine {
public:
    GameEngine(const GameEngine&) = delete;
    GameEngine& operator=(const GameEngine&) = delete;

    static GameEngine& getInstance() {
        static GameEngine instance;
        return instance;
    }

    static void initialize() {
        std::cout << "Game Engine initialized\n";
    }

private:
    GameEngine() = default;  // Private constructor to prevent instantiation.
    ~GameEngine() = default;
};

#endif //UNTITLED3_SINGLETON_H

