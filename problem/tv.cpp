#include <iostream>
#include "tv.h"

bool Tv::volup()
{
    if (volume < MaxVal)
    {
        volume++;
        return true;
    }
    else
        return false;
}

bool Tv::voldown()
{
    if (volume > MinVal)
    {
        volume--;
        return true;
    }
    else
        return false;
}

void Tv::chanup()
{
    if (channel < maxchannel)
        channel++;
    else
        channel = 1;
}

void Tv::chandown()
{
    if (channel > 1)
        channel--;
    else
        channel = maxchannel;
}

void Tv::setting() const
{
    using std::cout;
    using std::endl;
    cout << "TV = " << (state == Off ? "Off" : "On") << endl;
    if (state == On)
    {
        cout << "볼룸 = " << volume << endl;
        cout << "채널 = " << channel << endl;
        cout << "모드 = " << (mode == Antenna ? "지상파방송" : "케이블 방송") << endl;
        cout << "입력 = " << (input == TV ? "TV" : "DVD") << endl;
    }
}

void Remote::prinmode()
{
    if (mode2 == conver)
        cout << "conver" << endl;
    else
        cout << "norm" << endl;
}

void Tv::set_mode2(Remote &r)
{
    if (state == On)
        r.mode2 = (r.mode2 == r.norm) ? r.conver : r.norm;
}

// where_is_my_computer