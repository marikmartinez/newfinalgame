#include <string>

using namespace std;

class Game{
    private:
        Player player;
        Map map;
        int rounds = 0;
        int gameSaves = 1;
    public:
        void playGame();
        //functions part of playGame()
        void startGame();
        //functions part of startGame()
        void getPlayerInfo();
        void chooseSave();
        void createSave();

        void gameEnd();
        //functions part of gameEnd
        void saveGame();


}



