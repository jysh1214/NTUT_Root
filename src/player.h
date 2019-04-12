#ifndef PLAYER_H
#define PLAYER_H

#include <string>

using namespace std;

class Player
{
public:
    Player(string player);
    virtual ~Player(){}

    int play(int * board);

private:
    /* 玩家身份
       人類: human
       AI: ai
    */
    string _player;
                   
};

#endif