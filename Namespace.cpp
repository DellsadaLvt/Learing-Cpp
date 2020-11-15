#include <iostream>
/*****************/
namespace gioi_tinh 
{
    char persion = 50;
}
namespace age
{
    int persion = 43;
}
int main()
{
    std::cout << gioi_tinh::persion << age::persion  <<  std::endl;
    return 0;
}
