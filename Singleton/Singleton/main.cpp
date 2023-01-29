#include <iostream>
#include <thread>
#include "database.h"

void ThreadFoo(){
    std::this_thread::sleep_for(std::chrono::milliseconds(1000));
    DataBase* db = DataBase::Get_Instance("FOO");
    std::cout << db->get_value() << "\n";
}

void ThreadBar(){
    std::this_thread::sleep_for(std::chrono::milliseconds(1000));
    DataBase* db = DataBase::Get_Instance("BAR");
    std::cout << db->get_value() << "\n";
}


int main()
{
    std::cout <<"If you see the same value, then singleton was reused (yay!)\n" <<
                "If you see different values, then 2 singletons were created (booo!!)\n\n" <<
                "RESULT:\n";

    std::thread t1(ThreadFoo);
    std::thread t2(ThreadBar);

    t1.join();
    t2.join();

    return 0;
}
