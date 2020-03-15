#pragma once
#include "Support.h"
class OddSupport : public Support
{
public:
    using Support::Support;
    virtual bool resolve(Trouble *trouble) override
    {
        if (trouble->getNumber() % 2 == 1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};