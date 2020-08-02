#include "PlayerAndDice.h"
#include <iostream>

Dice::Dice(int num_faces)
    : faces(num_faces)
{
}

int Dice::launch() {
    return rand()%faces;
}


Player::Player(std::string n, Dice d) 
    : name(n), 
      dice(d)
{
}