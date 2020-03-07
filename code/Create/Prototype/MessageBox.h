#pragma once
#include "IProduct.h"
#include <iostream>
class MessageBox : public IProduct
{
public:
    MessageBox(const std::string &str) : m_name(str) {}
    MessageBox(const MessageBox &obj)
    {
        //std::cout << m_name << std::endl;
        //std::cout << obj.m_name << std::endl;
        this->m_name = obj.m_name;
    }
    IProduct *Clone() override
    {
        //Ĭ�Ͽ���������ǳ����
        //��Ҫ��д��������
        return new MessageBox(*this);
    }
    void Use(const std::string &str)
    {
        std::cout << "Message box " << m_name << " " << str << std::endl;
    }

private:
    std::string m_name;
};