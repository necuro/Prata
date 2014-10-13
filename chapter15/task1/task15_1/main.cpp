#include <iostream>
#include "tv.h"

using namespace std;

int main()
{
    Tv tv1;
    tv1.settings();

    Remote rm1;
    rm1.onoff(tv1);
    rm1.volup(tv1);
    rm1.chanup(tv1);
    rm1.set_chan(tv1, 15);
    rm1.set_mode(tv1);
    tv1.settings();

    rm1.ShowNewMode();
    tv1.SetRemoteMode(rm1);
    rm1.ShowNewMode();


return 0;
}

