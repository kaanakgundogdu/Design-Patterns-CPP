#include <iostream>
#include "observer.h"
#include "subject.h"


int main()
{
    Subject sender;
    Observer o1(sender);
    Observer o2(sender);
    Observer o3(sender);
    std::cout << "\n" ;
    std::cout << "\n" ;

    sender.create_message("Hello");

    o3.remove_from_list();
    std::cout << "\n" ;
    std::cout << "\n" ;

    sender.create_message("Slim Shady");
    std::cout << "\n" ;
    return 0;
}
