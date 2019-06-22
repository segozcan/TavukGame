//
// Created by ezgi on 19.06.2019.
//

#include "Entity.h"

Entity::Entity(){

    this->shape.setSize(sf::Vector2f(60.f, 60.f));
    this->shape.setFillColor(sf::Color::White);
    this->gravityDir = true; // true means normal gravity.
    this->movementSpeed = 200.f;
}

Entity::~Entity(){


}
bool Entity::reverseGravity() {

    if(sf::Keyboard::isKeyPressed(sf::Keyboard::Space)){

        this->gravityDir = !(this->gravityDir);
    }
    return this->gravityDir;
}

void Entity::move(const float&dt, const float dirx, const float diry){

    this->shape.move(dirx * this->movementSpeed * dt , diry * this->movementSpeed * dt);
}


void Entity::update(const float& dt){


}

void Entity::render(sf::RenderTarget* target){

    target->draw(this->shape);
}


