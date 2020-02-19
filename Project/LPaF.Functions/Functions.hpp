#ifndef LPaF_Functions_ShowMenu
#define LPaF_Functions_ShowMenu
#include"../LPaF.Menu/Menu.hpp"
#include"../LPaF.Constants/Constants.hpp"
#include<conio.h>
#include<cstdlib>
#include <windows.h>
namespace LPaF
{
namespace Functions
{
void ShowMenu()
{
    Menu::MenuGenerator mg=Menu::MenuGenerator( );
    mg.init(menu_list_1);
    mg.output();
    mg.showNotices()<<std::endl;
}
int readValue(int low,int high)
{
    char get=getch();
    get-=48;//translate ascii to numbers
    if ((get>high)||(get<low))
    {
        std::cout<<"对不起，输入错误。";
        std::exit(1);
    }
    return 0;
}
namespace Utility
{
void gotoxy(int x, int y) {
    COORD pos = {x,y};
    HANDLE hOut = GetStdHandle(STD_OUTPUT_HANDLE);// 获取标准输出设备句柄
    SetConsoleCursorPosition(hOut, pos);//两个参数分别是指定哪个窗体，具体位置
}
} //namespace Utility
}
}

#endif // LPaF_Functions_ShowMenu
