#include <iostream>

#include "OOXX.h"

using namespace std;

OOXX::OOXX()
{
    for (int i=0; i<9; i++) _board[i] = 0;
    _turn = 0;
}

void OOXX::draw()
{
    for (int j=2; j>=0; j--)
    {
        for (int x=0; x<3; x++)
        {
            if (_board[3*j + x] == 0) cout<<"|"<<" ";
            if (_board[3*j + x] == 1) cout<<"|"<<"O";
            if (_board[3*j + x] == 2) cout<<"|"<<"X";
        }
        cout<<"|"<<endl;
    }
}

string OOXX::gamePlay(int pos)
{
    string rep = "";
    _turn ++;
    if (_turn%2!=0)  // 奇數回合 O
    {
        rep += "O";
        if (_board[pos-1] == 0) _board[pos-1] = 1;
        else return "foul";
    }
    else // 偶數回合 X
    {
        rep += "X";
        if (_board[pos-1] == 0) _board[pos-1] = 2;
        else return "foul";
    }
     
    if (gameOver(pos))
    {
        rep += "win";
        return rep;
    }
    else if (_turn == 9)
    {
        return "flat";
    }

    return "";
}

bool OOXX::gameOver(int pos)
{
    // 判斷是否3子連線

    return false;
}

int * OOXX::getBoard()
{
    return _board;
}

