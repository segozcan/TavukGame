//
// Created by ezgi on 17.06.2019.
//

#include <GameState.h>

GameState :: GameState(sf::RenderWindow* window)
    :State(window)
{


};

GameState :: ~GameState(){


};

void GameState::endState() {


    std::cout << "Ending" << std::endl;
}


void GameState::updateInput(const float &dt){

    this->checkForQuit();


    //update player input
    if(sf::Keyboard::isKeyPressed(sf::Keyboard::A)){

        this->player.move(dt, -1.f, 0.f);
    }
    if(sf::Keyboard::isKeyPressed(sf::Keyboard::D)){

        this->player.move(dt, 1.f, 0.f);
    }
    if(sf::Keyboard::isKeyPressed(sf::Keyboard::W)){

        this->player.move(dt, 0.f, -1.f);
    }
    if(sf::Keyboard::isKeyPressed(sf::Keyboard::S)){

        this->player.move(dt, 0.f, +1.f);
    }
}

void GameState::update(const float &dt){

    this->updateKeybinds(dt);

    this->player.update(dt);
}

void GameState::render(sf::RenderTarget* target){

    if(target){

        this->player.render(this->window);
    }else{


    }

}

