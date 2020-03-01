#pragma once
#include "IDisplayImpl.h"
class Display
{
public:
    virtual ~Display() {}
    Display(IDisplayImpl *impl) : m_pImpl(impl) {}
    
    void display()
    {
        open();
        print();
        close();
    }

protected:
    virtual void open()
    {
        m_pImpl->rawOpen();
    }
    virtual void print()
    {
        m_pImpl->rawPrint();
    }
    virtual void close()
    {
        m_pImpl->rawClose();
    }

private:
    IDisplayImpl *m_pImpl;
};