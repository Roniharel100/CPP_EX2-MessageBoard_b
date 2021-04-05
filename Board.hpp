#include "Direction.hpp"
#include <string>
#include <map>
const int temp = 5; 

namespace ariel
{
    class Board
    {
        std::map<unsigned int, std::map<unsigned int, char>> board;
        unsigned int rowMin, rowMax, colMin, colMax;

    public:
        Board();
        void post(uint row, uint col, Direction direction, const std::string &message);
        std::string read(uint row, uint col, Direction direction, uint length);
        void show();
    };
}