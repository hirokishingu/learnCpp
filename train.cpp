#include <iostream>
#include <iomanip>
#define    hexformat(fill, wd)        std::hex <<std::setfill(fill)<<std::setw(wd)
int main()
{
    const int SIZE = 10;
    char v[SIZE];
    for(int i = 0; i < SIZE; ++i) {
        char *ptr = &v[i];
        std::cout << "ptr = 0x" << hexformat('0', 8) << (int)ptr << "\n";
    }
}