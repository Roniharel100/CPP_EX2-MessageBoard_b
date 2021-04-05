#include "Board.hpp"
#include <string>
#include <climits>
#include <iostream>

using namespace std;
using namespace ariel;

Board::Board()
{
    rowMin = UINT_MAX;
    rowMax = 0;
    colMin = UINT_MAX;
    colMax = 0;
}

void Board::post(uint row, uint col, Direction direction, const std::string &message)
{
    if (message.empty())
    {
        return;
    }

    if (rowMin > row)
    {
        rowMin = row;
    }
    if (colMin > col)
    {
        colMin = col;
    }

    if (direction == Direction::Vertical)
    {
        if (rowMax < row + message.length())
        {
            rowMax = row + message.length();
        }
        if (colMax < col)
        {
            colMax = col;
        }
        for (unsigned int i = 0; i < message.length(); i++)
        {
            board[row][col] = message.at(i);
            row++;
        }
    }
    else if (direction == Direction::Horizontal)
    {
        if (colMax < col + message.length())
        {
            colMax = col + message.length();
        }
        if (rowMax < row)
        {
            rowMax = row;
        }
        for (unsigned int i = 0; i < message.length(); i++)
        {
            board[row][col] = message.at(i);
            col++;
        }
    }
}

string Board::read(unsigned int row, unsigned int col, Direction direction, unsigned int length)
{
    string ans;
    if (direction == Direction::Vertical)
    {
        for (unsigned int i = 0; i < length; i++)
        {
            if (board[row][col] != 0)
            {
                ans += board[row][col];
            }
            else
            {
                ans += '_';
            }
            row++;
        }
    }
    else if (direction == Direction::Horizontal)
    {
        for (unsigned int i = 0; i < length; i++)
        {
            if (board[row][col] != 0)
            {
                ans += board[row][col];
            }
            else
            {
                ans += '_';
            }
            col++;
        }
    }
    return ans;
}

void Board::show()
{
    for (unsigned long i = rowMin; i < rowMax + temp; i++)
    {
        cout << i << ": ";
        for (unsigned long j = colMin; j < colMax + temp; j++)
        {
            if (board[i][j] != 0)
            {
                  cout << board.at(i).at(j);
            }
            else
            {
                cout << '_';         
            }
        }
        cout << endl;
    }
}