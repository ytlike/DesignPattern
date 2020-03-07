#include "BigCharImpl.h"
#include <unordered_map>

class BigCharFactory
{
public:
    static BigCharFactory &GetInstance()
    {
        static BigCharFactory ins;
        return ins;
    }

    ~BigCharFactory()
    {
        for (auto i : m_map)
        {
            delete i.second;
        }
        m_map.clear();
    }

    BigChar *getBigChar(int order)
    {
        BigChar *b = nullptr;
        int tOrder = order % 11;

        auto it = m_map.find(tOrder);
        if (it == m_map.end())
        {
            b = new BigCharImpl(tOrder);
            m_map.insert({ tOrder, b });
            return b;
        }
        else
        {
            return it->second;
        }
    }

protected:
    BigCharFactory() = default;
    BigCharFactory(const BigCharFactory &) = delete;
    BigCharFactory &operator=(const BigCharFactory &) = delete;

private:
    std::unordered_map<int, BigChar *> m_map;
};