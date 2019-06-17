//
// Created by ezgi on 17.06.2019.
//

#ifndef TAVUK_GAME_H
#define TAVUK_GAME_H

#include <iostream>
#include <ctime>
#include <stdlib.h>
#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
#include <SFML/System.hpp>
#include <SFML/Audio.hpp>
#include <SFML/Network.hpp>


class Game {

private:

    //Variables
    sf::RenderWindow *window;
    sf::Event sfEvent;

    //Initialization

    void initWindow();


public:

    //Constructors & Destructors

    Game();

    virtual ~Game();

    //Functions

    void updateSFMLEvents();
    void update();
    void render();
    void run();


};


#endif //TAVUK_GAME_H
