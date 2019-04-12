#include <iostream>

#include "player.h"

using namespace std;

Player::Player(string player): _player(player)
{

}

int Player::play(int * board)
{
    if (_player == "human")
    {
        cout << "請輸入位置(1~9)：";
        int pos;
        try
        {
            cin >> pos;
            cout << endl;
        }
        catch(const exception& e)
        {
            cerr << e.what() << '\n';
        }

        return pos;
    }
}