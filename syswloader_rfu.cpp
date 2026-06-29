#include <windows.h>
#include <raylib.h>
#include <iostream>
using namespace std;


void type_nfu()
{
    WINCLASS wc;
    // Add window props
    double WINDOW_HEIGHT = 900.90;
    double WINDOW_BASE   = WINDOW_HEIGHT / 2;

    wc.systempx      = PxLoaderEX();
    wc.WINPE         = BootWinOBPE(true, nullptr);
};

int main()
{
    std::cout << "Initializing Xarobat and IX Windows PE servies, Reserved for future use";
    type_nfu();
};
