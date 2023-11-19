/* Including all Patterns*/
#include "headers/Singleton.h"
#include "headers/Strategy.h"
#include "headers/Factory.h"
#include "headers/Observer.h"
#include "headers/Decorator.h"
#include "headers/Adapter.h"
#include <string_view>

 constexpr uint32_t hash(std::string_view data) noexcept {
    uint32_t hash = 5381;

    for (auto&& c : data)
        hash = ((hash << 5) + hash) + static_cast<unsigned char>(c);

    return hash;
}

int main() {
    // Singleton - Game Engine
    GameEngine::getInstance();
    GameEngine::initialize();

    // Strategy - Gameplay Strategies
    AttackStrategy attackStrategy;
    DefenseStrategy defenseStrategy;
    //Executing Strategies
    attackStrategy.execute();
    defenseStrategy.execute();

    // Factory - Game Entity Factories
    PlayerFactory playerFactory;
    EnemyFactory enemyFactory;
    // Calling Concrete Creators
    GameObject* playerCharacter = playerFactory.createGameObject();
    GameObject* enemyCharacter = enemyFactory.createGameObject();

    playerCharacter->render();
    enemyCharacter->render();

    // Observer - Game Event Observers
    SoundEffectObserver soundObserver;
    ScoreUpdateObserver scoreObserver;

    GameStateSubject gameState;
    gameState.attach(&soundObserver);
    gameState.attach(&scoreObserver);

    // Change the game state and notify observers
    gameState.setState("Game Over");
    // Retrieve and print the current game state
    std::cout << "Current Game State: " << gameState.getState() << "\n";

    // Decorator - Rendering Decorators
    ColorFilterDecorator characterWithColorFilter(playerCharacter);

    characterWithColorFilter.render();

    // Adapter - Input Adapter
    InputAdapter adaptedPlayer;

    adaptedPlayer.render();

    delete playerCharacter;
    delete enemyCharacter;


    std::string command;

    while (true) {
        std::cout << "Enter a command (type 'help' for a list of commands):\n> ";
        std::cin >> command;


        switch (hash(command)) {
            case hash("help"):
                std::cout << "Available commands:\n"
                         "1. attack - Execute attack strategy\n"
                         "2. defend - Execute defense strategy\n"
                         "3. render - Render player character with color filter\n"
                         "4. input - Handle user input (adapted)\n"
                         "5. quit - Quit the game\n";
                break;
            case hash("attack"):
                attackStrategy.execute();
                break;
            case hash("defend"):
                defenseStrategy.execute();
                break;
            case hash("render"):
                characterWithColorFilter.render();
                break;
            case hash("input"):
                adaptedPlayer.render();
                break;
            case hash("quit"):
                std::cout << "Exiting the game. Goodbye!\n";
                return 0;
            default:
                std::cout << "Unknown command. Type 'help' for a list of commands.\n";
                break;
        }
    }
}
