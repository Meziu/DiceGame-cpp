#include <iostream>
#include <time.h>
#include "Match.h"
using namespace std;

string askInput(string question);

int main() {
    srand(time(0));

    Player play_1(askInput("Give a name for player 1: "), Dice(6));
    Player play_2(askInput("Give a name for player 2: "), Dice(6));

    Match game(play_1, play_2);

    game.start_match();
}

string askInput(string question){
    string answer;

    cout << question << endl;

    cin >> answer;

    return answer;
}