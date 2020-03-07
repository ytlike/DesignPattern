#include "BigCharFactory.h"
#include <thread>

void work() 
{
    for (int i = 0; i < 20; ++i)
    {
        for (int j = 0; j < 2; ++j)
        {
            BigChar *b = BigCharFactory::GetInstance().getBigChar(i);
            //std::cout << i << "  " << b << std::endl;
            //b->show();
        }
    }
}

int main()
{
    //using std::thread;

    /*thread t1(work);
    thread t2(work);
    t1.join();
    t2.join();*/

    //��Ԫģʽ ��ע���̲߳���ȫ����
    for (int i = 0; i < 20; ++i)
    {
        for (int j = 0; j < 2; ++j)
        {
            BigChar *b = BigCharFactory::GetInstance().getBigChar(i);
            std::cout << i << "  " << b << std::endl;
            b->show();
        }
    }

    system("pause");
    return 0;
}