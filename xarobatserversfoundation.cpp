#include <windows.h>
#include <iostream>
#include <fstream>
#include <raylib.h>
using namespace std;

void system_loader_init_psi()
{
    WINCLASS wc;
    wc.loadserver        = LoadServer("registry editor", 0x0013f);
    wc.geServer          = CompileServer(wc.loadserver);
    if (!wc.loadserver)
    {
        std::cout << "Any Infosoft intializes are not supported, check the code";
    };
    return 0;
};

int main()
{
    system_loader_init_psi();
};
