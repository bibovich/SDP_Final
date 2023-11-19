//
// Created by Alibi on 19.11.2023.
//

#ifndef UNTITLED3_FACTORY_H
#define UNTITLED3_FACTORY_H
#include <iostream>

// Game Entity Factory
struct GameObject {
    virtual void render() = 0;
    virtual ~GameObject() = default;
};

struct Player :  GameObject {
    void render() override{
        std::cout << "Rendering player character\n";
    }
};

struct Enemy : GameObject {
    void render() override{
        std::cout << "Rendering enemy character\n";
    }
};

struct GameObjectFactory {
    virtual GameObject* createGameObject() = 0;
};

struct PlayerFactory : GameObjectFactory {
    GameObject* createGameObject() override{
        return new Player();
    }

};

struct EnemyFactory : GameObjectFactory {
    GameObject* createGameObject() override{
        return new Enemy();
    }
};

#endif //UNTITLED3_FACTORY_H
