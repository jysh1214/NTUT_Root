#ifndef OOXX_H
#define OOXX_H

#include <string>

using namespace std;

class OOXX
{
public:
    OOXX();
    virtual ~OOXX(){};
    
    void draw();
    string gamePlay(int pos);

    int * getBoard();
private:
    bool gameOver(int pos);
    bool foul();

    int _turn; // 回合數
    int _board[9]; // O:1, X:2
    /*
    7|8|9
    4|5|6
    1|2|3
    */
};

#endif