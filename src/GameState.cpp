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


void GameState::updateKeybinds(const float &){

    this->checkForQuit();
}

void GameState::update(const float &dt){

    this->updateKeybinds(dt);
    this->player.update(dt);
}

void GameState::render(sf::RenderTarget* target){

    this->player.render(target);
}

