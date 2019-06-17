//
// Created by ezgi on 17.06.2019.
//

#ifndef TAVUK_GAME_H
#define TAVUK_GAME_H

#include "State.h"


class Game {

private:

    //Variables
    sf::RenderWindow *window;
    sf::Event sfEvent;

    sf::Clock dtClock;

    float dt;

    std::stack<State*> states;

    //Initialization

    void initWindow();
    void initStates();


public:

    //Constructors & Destructors

    Game();

    virtual ~Game();

    //Functions
    void updateDt();
    void updateSFMLEvents();
    void update();
    void render();
    void run();


};


#endif //TAVUK_GAME_H
