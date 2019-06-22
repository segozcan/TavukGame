//
// Created by ezgi on 17.06.2019.
//

#ifndef TAVUK_STATE_H
#define TAVUK_STATE_H

#include <Entity.h>

class State {

private:

protected:

    sf::RenderWindow* window;
    std::vector<sf::Texture*> textures;
    bool quit;

public:

    State(sf::RenderWindow* window);
    virtual ~State();

    // virtual void = 0 is a pure virtual function, classes inheriting from state class must contain these functions.

    const bool& getQuit() const;

    virtual void checkForQuit();

    virtual void endState() = 0;
    virtual void updateKeybinds(const float&dt) = 0;
    virtual void update(const float &dt) = 0;
    virtual void render(sf::RenderTarget* target = nullptr) = 0;

};


#endif //TAVUK_STATE_H
