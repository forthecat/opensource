#include <iostream>
#include "tv.h"

int main()
{
    using std::cout;
    Tv s42;
    cout << "42\" Tv의 초기 서정값: \n";
    s42.setting();
    s42.onoff();
    s42.chanup();
    cout << "\n42\" TV의 변경된 설정값: \n";
    s42.setting();

    Remote grey;

    grey.set_chan(s42, 10);
    grey.volup(s42);
    grey.volup(s42);
    cout << "\n리모컨 사용 후 42\" TV의 설정값:\n";
    s42.setting();

    Tv s58(Tv::On);
    s58.set_mode();
    grey.set_chan(s58, 28);
    cout << "\n58\" TV의 설정값: \n";
    s58.setting();
    return 0;
}