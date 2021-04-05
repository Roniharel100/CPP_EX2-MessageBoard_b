#include "Board.hpp"
#include "Direction.hpp"

using namespace ariel;
using namespace std;

int main() {

    Board *board = new Board;

    board->post(0, 0, Direction::Horizontal, "Make your dreams come true");
    board->post(1, 0, Direction::Horizontal, "Don't worry, be happy");
    board->post(2, 0, Direction::Horizontal, "Don't let a moment go by");
    board->post(3, 0, Direction::Horizontal, "Love the life you live and live the life you love");
    board->post(4, 0, Direction::Horizontal, "Smile,cause it's free");
    board->post(5, 0, Direction::Horizontal, "Nothing can stop me");
    board->post(6, 0, Direction::Horizontal, "The sky is the limit");
    board->post(100,50,Direction::Horizontal,"life is wonderfull just belive and live as you want to live");

    board->show();

}

