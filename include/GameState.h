//
// Created by ezgi on 17.06.2019.
//

#ifndef TAVUK_GAMESTATE_H
#define TAVUK_GAMESTATE_H

#include "State.h"

class GameState : public State {

private:


public:
    GameState(sf::RenderWindow* window);
    virtual ~GameState();

    void update();
    void render();

};


#endif //TAVUK_GAMESTATE_H
