#ifndef MATCH_H
#define MATCH_H

#include "PlayerAndDice.h"
#include <iostream>

class Match {
    public:
        Match(Player player_1, Player player_2);
        void start_match();
    private:
        void round();
        void resThrow(int t1, int t2);
        void endRound();
        void endMatch();
        Player p1;
        Player p2;
        int roundPoints[3] = {0,0,0};
        int matchPoints[2] = {0,0};
};

#endif