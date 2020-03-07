#pragma once
#include "BigChar.h"
#include <iostream>
static const char *strList[] = { "....######......\n"
                                 "..##......##....\n"
                                 "..##......##....\n"
                                 "..##......##....\n"
                                 "..##......##....\n"
                                 "..##......##....\n"
                                 "....######......\n"
                                 "................\n",

                                 "......##........\n"
                                 "..######........\n"
                                 "......##........\n"
                                 "......##........\n"
                                 "......##........\n"
                                 "......##........\n"
                                 "..##########....\n"
                                 "................\n",

                                 "....######......\n"
                                 "..##......##....\n"
                                 "..........##....\n"
                                 "......####......\n"
                                 "....##..........\n"
                                 "..##............\n"
                                 "..##########....\n"
                                 "................\n",

                                 "....######......\n"
                                 "..##......##....\n"
                                 "..........##....\n"
                                 "......####......\n"
                                 "..........##....\n"
                                 "..##......##....\n"
                                 "....######......\n"
                                 "................\n",

                                 "........##......\n"
                                 "......####......\n"
                                 "....##..##......\n"
                                 "..##....##......\n"
                                 "..########......\n"
                                 "........##......\n"
                                 "......######....\n"
                                 "................\n",

                                 "..##########....\n"
                                 "..##............\n"
                                 "..##............\n"
                                 "..########......\n"
                                 "..........##....\n"
                                 "..##......##....\n"
                                 "....######......\n"
                                 "................\n",

                                 "....######......\n"
                                 "..##......##....\n"
                                 "..##............\n"
                                 "..########......\n"
                                 "..##......##....\n"
                                 "..##......##....\n"
                                 "....######......\n"
                                 "................\n",

                                 "..##########....\n"
                                 "..##......##....\n"
                                 "..........##....\n"
                                 "........##......\n"
                                 "......##........\n"
                                 "......##........\n"
                                 "......##........\n"
                                 "................\n",

                                 "....######......\n"
                                 "..##......##....\n"
                                 "..##......##....\n"
                                 "....######......\n"
                                 "..##......##....\n"
                                 "..##......##....\n"
                                 "....######......\n"
                                 "................\n",

                                 "....######......\n"
                                 "..##......##....\n"
                                 "..##......##....\n"
                                 "....########....\n"
                                 "..........##....\n"
                                 "..##......##....\n"
                                 "....######......\n"
                                 "................\n",

                                 "................\n"
                                 "................\n"
                                 "................\n"
                                 "................\n"
                                 "..##########....\n"
                                 "................\n"
                                 "................\n"
                                 "................\n" };

class BigCharImpl : public BigChar
{
public:
    BigCharImpl(int order) : order(order % 11)
    {
        std::cout << order % 11 << std::endl;
    }
    void show()
    {
        std::cout << strList[order] << std::endl;
    }

private:
    const int order;
};