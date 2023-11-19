//
// Created by Alibi on 19.11.2023.
//

#ifndef UNTITLED3_OBSERVER_H
#define UNTITLED3_OBSERVER_H
#include <iostream>
#include <vector>

// Game Event Observer
struct GameEventObserver {
    virtual void handleEvent() = 0;
};

struct SoundEffectObserver : GameEventObserver {
    void handleEvent() override {
        std::cout << "Playing sound effect\n";
    }
};

struct ScoreUpdateObserver : GameEventObserver {
    void handleEvent() override {
        std::cout << "Updating player score\n";
    }
};

class GameEventSubject {
private:
    std::vector<GameEventObserver*> observers;

public:
    void attach(GameEventObserver* observer) {
        observers.push_back(observer);
    }

    void notify() {
        for (GameEventObserver* observer : observers)
            observer->handleEvent();
    }
};

// Game State Subject
class GameStateSubject : public GameEventSubject {
private:
    std::string state;

public:
    [[nodiscard]] const std::string& getState() const {
        return state;
    }

    void setState(const std::string& newState) {
        state = newState;
        notify();  // Notify observers when the game state changes.
    }
};

#endif //UNTITLED3_OBSERVER_H
