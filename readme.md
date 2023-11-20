# Software Design Patterns Project

This project is the final exam project for the Software Design Patterns course. It implements six different design patterns: Singleton, Strategy, Factory, Observer, Decorator, and Adapter.

## Patterns Implemented

### Singleton
The `GameEngine` class is implemented as a Singleton. It ensures that there is only one instance of the `GameEngine` and provides a global point of access to it.

### Strategy
Two gameplay strategies, `AttackStrategy` and `DefenseStrategy`, are implemented using the Strategy pattern. These strategies can be executed independently.

### Factory
Game entity factories, `PlayerFactory` and `EnemyFactory`, are implemented using the Factory pattern. They create instances of player and enemy game objects, respectively.

### Observer
The Observer pattern is implemented with `SoundEffectObserver` and `ScoreUpdateObserver` observing changes in the game state (`GameStateSubject`). They react to changes in the game state by playing sound effects and updating the player's score.

### Decorator
The `ColorFilterDecorator` class is implemented as a decorator for rendering game objects. It adds a color filter to the rendering process.

### Adapter
The `InputAdapter` class acts as an adapter for handling user input. It adapts the `InputSystem` to the `GameObject` interface.

## Usage

To run the project, compile the code and execute the generated binary. The program provides a simple command-line interface where you can interact with the implemented design patterns. Some available commands include:
- `help`: Display a list of available commands.
- `attack`: Execute the attack strategy.
- `defend`: Execute the defense strategy.
- `render`: Render the player character with a color filter.
- `input`: Handle user input (adapted).
- `quit`: Quit the game.

## Building and Running
1. Compile the code using a C++ compiler.
   ```bash
   g++ -o main main.cpp
2. Run the executable.
   ```bash
   ./main

## Authors
-Group: SE-2211
- Yessengali-(https://github.com/kazakhokage)
- Alibi-(https://github.com/bibovich)




