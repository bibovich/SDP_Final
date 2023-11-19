//
// Created by Alibi on 19.11.2023.
//

#ifndef UNTITLED3_STRATEGY_H
#define UNTITLED3_STRATEGY_H
#include <iostream>

struct GameplayStrategy {
    virtual void execute() = 0;
};

struct AttackStrategy : GameplayStrategy {
    void execute() override{
        std::cout << "Executing attack strategy\n";
    }
};

struct DefenseStrategy : GameplayStrategy {
    void execute() override{
        std::cout << "Executing defense strategy\n";
    }
};

#endif //UNTITLED3_STRATEGY_H
