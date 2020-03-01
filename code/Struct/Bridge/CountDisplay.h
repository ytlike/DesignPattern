#pragma once
#include "Display.h"
class CountDisplay : public Display
{
private:
    //在子类中使用 using 声明引入基类成员名称
    using Display::Display;//引用基类构造函数

public:
    void mulitDisplay(unsigned int count)
    {
        open();
        for (unsigned int i = 0; i < count; ++i)
        {
            print();
        }
        close();
    }
};