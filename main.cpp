/* Including all Patterns*/
#include "headers/Singleton.h"
#include "headers/Strategy.h"
#include "headers/Factory.h"
#include "headers/Observer.h"
#include "headers/Decorator.h"
#include "headers/Adapter.h"

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

}


