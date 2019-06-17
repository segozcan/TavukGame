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

void GameState::endState(){


}

void GameState::update(const float &dt){

    std::cout << "aaaaa" << std::endl;
}

void GameState::render(sf::RenderTarget* target){


}
