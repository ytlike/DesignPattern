#pragma once
#include "Entry.h"
#include <iostream>
#include <string>
#include <vector>
class Directory : public Entry
{
public:
    Directory(const std::string &name) : m_name(name) {}
    ~Directory()
    {
        for (auto it : m_dirs)
        {
            delete it;
        }
        m_dirs.clear();
    }

    void addEntry(Entry *entry)
    {
        m_dirs.push_back(entry);
    }

    void removeEntry()
    {
        m_dirs.pop_back();
    }

    Entry *getEntry(int index)
    {
        return m_dirs.at(index);
    }

    virtual std::string getName() const override
    {
        return m_name;
    }

    virtual int getSize() const override
    {
        int size = 0;
        for (auto it : m_dirs)
        {
            size += it->getSize();
        }
        return size;
    }

    virtual void printList(const std::string &str) override
    {
        std::cout << str << "/" << toString() << std::endl;
        for (auto it : m_dirs)
        {
            it->printList(str + "/" + m_name);
        }
    }

private:
    std::string m_name;
    std::vector<Entry *> m_dirs;
};