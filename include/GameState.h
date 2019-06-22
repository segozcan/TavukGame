//
// Created by ezgi on 17.06.2019.
//

#ifndef TAVUK_GAMESTATE_H
#define TAVUK_GAMESTATE_H

#include "State.h"

class GameState : public State {

private:
    Entity player;

public:
    GameState(sf::RenderWindow* window);
    virtual ~GameState();

    void endState();
    void updateInput(const float &dt);
    void update(const float &dt);
    void render(sf::RenderTarget* target = nullptr);

};


#endif //TAVUK_GAMESTATE_H
