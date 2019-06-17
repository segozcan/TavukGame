//
// Created by ezgi on 17.06.2019.
//

#ifndef TAVUK_STATE_H
#define TAVUK_STATE_H


#include <iostream>
#include <ctime>
#include <fstream>
#include <sstream>
#include <stack>
#include <map>
#include <stdlib.h>
#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
#include <SFML/System.hpp>
#include <SFML/Audio.hpp>
#include <SFML/Network.hpp>
#include <vector>

class State {

private:

    sf::RenderWindow* window;
    std::vector<sf::Texture*> textures;

public:

    State(sf::RenderWindow* window);
    virtual ~State();

    // virtual void = 0 is a pure virtual function, classes inheriting from state class must contain these functions.

    virtual void endState() = 0;
    virtual void update(const float &dt) = 0;
    virtual void render(sf::RenderTarget* target = nullptr) = 0;

};


#endif //TAVUK_STATE_H
