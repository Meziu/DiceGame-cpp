#include "Match.h"

Match::Match(Player player_1, Player player_2)
    : p1(player_1), p2(player_2)
{
}

void Match::endRound() {
    std::cout << "The round ends:" << std::endl;
    std::cout << p1.name << " score: " << roundPoints[0] << std::endl;
    std::cout << p2.name << " score: " << roundPoints[1] << std::endl;
    std::cout << "Draws: " << roundPoints[2] << std::endl;
}

void Match::endMatch() {
    std::cout << "The match ends:" << std::endl;
    std::cout << p1.name << " score: " << matchPoints[0] << std::endl;
    std::cout << p2.name << " score: " << matchPoints[1] << std::endl;
}

void Match::resThrow(int t1, int t2) {
    std::cout << p1.name << " gets " << t1 << " vs the score " << t2 << " of " << p2.name << std::endl;
}

void Match::round() {
    int g = 0;

    while (g < 3) {
        int t1 = p1.dice.launch();
        int t2 = p2.dice.launch();

        if (t1 > t2) {
			roundPoints[0]++;
		}
		else if (t1 < t2) {
			roundPoints[1]++;
		}
		else if (t1 == t2) {
			roundPoints[2]++;
		};

        g++;
        resThrow(t1, t2);
    }
    endRound();
}

void Match::start_match() {
    for (int i=0; i<3; i++) {
        round();

        if (roundPoints[0] > roundPoints[1]) {
            matchPoints[0]++;
        }
        else {
            matchPoints[1]++;
        }

        roundPoints[0] = 0;
        roundPoints[1] = 0;
        roundPoints[2] = 0;
    }

    endMatch();
}
