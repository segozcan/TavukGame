//
// Created by ezgi on 17.06.2019.
//

#include <State.h>

State::State(sf::RenderWindow* window) {

    this->window = window;
    this->quit = false;


}

State::~State() {


}

void State::checkForQuit()  {

    if(sf::Keyboard::isKeyPressed(sf::Keyboard::Escape)){

        this->quit = true;
    }
}



const bool &State::getQuit() const {
    return this->quit;
}

void State::updateKeybinds(const float&) {

}
