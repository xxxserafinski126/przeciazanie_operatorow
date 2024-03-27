#include <iostream>
#include "ol.h"

int main()
{
    ol p1(1,2);
    ol p2(3,3);
    ol p3(p1);

    p1 += p2;
    std::cout << p1;
    std::cout << p3;
}
