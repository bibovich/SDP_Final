# GamePatterns Showcase 🎮

The "GamePatterns Showcase" project is a culmination of the Software Design Patterns course, serving as the final exam project.
## Project Overview
### Focus: 
The project centers on the implementation of six fundamental design patterns: Singleton, Strategy, Factory, Observer, Decorator, and Adapter. Each pattern is strategically applied to different facets of a gaming scenario, illustrating their utility and impact on code structure, flexibility, and maintainability.

### Purpose: 
With a primary goal of showcasing the practical application of design patterns, this project serves as an interactive learning experience. By navigating a command-line interface, users can explore and interact with the implemented patterns, gaining insights into their real-world usage.

## UML Diagram
(https://github.com/bibovich/SDP_Final/blob/main/UML.jpg)
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

## String Hash Function
The function initializes the hash variable to 5381, then iterates over each character in the input string, updating the hash value based on the Jenkins one-at-a-time hash algorithm. The result is a 32-bit hash code.
```bash
constexpr uint32_t hash(std::string_view data) noexcept {
uint32_t hash = 5381;

    for (auto&& c : data)
        hash = ((hash << 5) + hash) + static_cast<unsigned char>(c);

    return hash;
}
```



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




