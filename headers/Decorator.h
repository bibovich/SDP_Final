//
// Created by Alibi on 19.11.2023.
//

#ifndef UNTITLED3_DECORATOR_H
#define UNTITLED3_DECORATOR_H
#include "Factory.h"

// Decorator - Rendering Decorators
class RenderDecorator : public GameObject {
protected:
    GameObject* gameObject;

public:
    explicit RenderDecorator(GameObject* obj) : gameObject(obj) {}

    void render() override{
        if (gameObject != nullptr)
            gameObject->render();
    }
};


class ColorFilterDecorator : public RenderDecorator {
public:
    explicit ColorFilterDecorator(GameObject* obj) : RenderDecorator(obj) {}

    static void applyColorFilter() {
        std::cout << "Applying color filter\n";
    }
    void render() override{
        RenderDecorator::render();
        applyColorFilter();
    }
};

#endif //UNTITLED3_DECORATOR_H
