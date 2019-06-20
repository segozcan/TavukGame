//
// Created by ezgi on 17.06.2019.
//

#include <Game.h>

//Static functions

//Initializer Functions

void Game::initWindow() {

    std::ifstream ifs("config/window.ini");

    sf::VideoMode windowBounds(800, 600);
    std::string title = "None";
    unsigned framerateLimit = 120;
    bool verticalSyncEnabled = false;

    if (ifs.is_open()){

        std::getline(ifs, title);
        ifs >> windowBounds.width >> windowBounds.height;
        ifs >> framerateLimit;
        ifs >> verticalSyncEnabled;
    }

    ifs.close();

    this->window = new sf::RenderWindow(windowBounds, title);
    this->window->setFramerateLimit(framerateLimit);
    this->window->setVerticalSyncEnabled(verticalSyncEnabled);

}

void Game::initStates(){

    this->states.push(new GameState(this->window));
}

//Constructors & Destructors

Game::Game(){

        this->initWindow();
        this->initStates();
}

Game::~Game() {

    delete this->window;

    while(!this->states.empty()){

        delete this->states.top(); // removes the data that the pointer is holding

        this->states.pop(); // removes the pointer
    }
}

//Functions

void Game::endApp(){

    std::cout << "ending app" << "\n";
}

void Game::updateDt() {

    this->dt = this->dtClock.restart().asSeconds();
}

void Game::updateSFMLEvents() {

    while(this->window->pollEvent(this->sfEvent)){

        if(this->sfEvent.type == sf::Event::Closed){

            this->window->close();
        }
    }

}

void Game::update() {

    this->updateSFMLEvents();

    if(!this->states.empty()){

        this->states.top()->update(this->dt);

        if(this->states.top()->getQuit()){

            this->states.top()->endState();
            delete this->states.top();
            this->states.pop();
        }
    }
    else{
        this->endApp();
        this->window->close();
    }
 //End app
}

void Game::render() {

    this->window->clear();

    //Render items

    if(!this->states.empty()){

        this->states.top()->render(window);
    }

    this->window->display();

}

void Game::run() {

    while(this->window->isOpen()){

        this->updateDt();
        this->update();
        this->render();

    }

}
