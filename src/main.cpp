#include <iostream>

#include "OOXX.h"
#include "player.h"

/*
勝利：
    三子連線或對方犯規，勝利的同時宣告對方失敗
犯規：
    想下的地方已經有棋子了，或下棋超過棋盤範圍（1~9）
平手：
    第九回合結束且雙方皆未勝利
*/

using namespace std;

int main()
{
    OOXX game = OOXX();

    Player p1 = Player("human");
    Player p2 = Player("human");

    int * currentBoard; // 使用一個指標指向現在棋盤
    string con;

    game.draw();

    // game loop
    while (1)
    {
        currentBoard = game.getBoard(); // 取得現在棋盤
        con = game.gamePlay(p1.play(currentBoard));
        game.draw();
        if (con == "Oxin")
        {
            cout<< "O player wins!" << endl;
            break;
        }
        else if (con == "foul") // O player 犯規
        {
            cout<< "X player wins!" << endl;
            break; 
        }
        else if (con == "flat") // 平手
        {
            cout<< "Flat!" << endl;
            break;    
        }

        currentBoard = game.getBoard(); // 取得現在棋盤
        con = game.gamePlay(p2.play(currentBoard));
        game.draw();
        if (con == "Xwin")
        {
            cout<< "X player wins!" << endl;
            break; 
        }
        else if (con == "foul") // X player 犯規
        {
            cout<< "O player wins!" << endl;
            break;
        }

        // game.draw();
    }
}