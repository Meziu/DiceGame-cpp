#ifndef PLAYER_AND_DICE_H
#define PLAYER_AND_DICE_H

#include <string>

class Dice {
    public:
        Dice(int num_faces);
        int launch();
    private:
        int faces;
};

class Player {
    public:
        Player(std::string n, Dice d);
        std::string name;
        Dice dice;
};

#endif