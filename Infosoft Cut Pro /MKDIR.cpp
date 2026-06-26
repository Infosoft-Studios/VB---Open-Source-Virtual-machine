// Intializies part of the function(raylib)
#include <iostream>
#include <raylib.h>
using namespace std;

class driverded_system
{
    public:
        virtual void static_virtual()
        {
            double SCREEN_HEIGHT = 890.90;
            double SCREEN_WIDTH = 90.21;
            InitWindow(SCREEN_HEIGHT, SCREEN_WIDTH, "Window");
        }
}

class catch_data : public driverded_system
{
    public:
      void static_virtual(int x, int y) override;
}
