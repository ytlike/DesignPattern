#pragma once
#include "Display.h"
class CountDisplay : public Display
{
private:
    //��������ʹ�� using ������������Ա����
    using Display::Display;//���û��๹�캯��

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