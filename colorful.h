#ifndef COLORFUL_H_INCLUDED
#define COLORFUL_H_INCLUDED
#include <windows.h>
class color{
private:
    int ft=7;
    int bg=0;
    int ln=0;
public:
    color(){}; //constructor
    set(int a){ // 輸入 0-8191顏色
        ft=a%16;
        bg=(a/16)%16;
        ln=(a/1024)%8;
    };
    set(int a,int b){ //輸入 a(0-16)背景顏色，b(0-16)文字顏色
        bg=a%16;
        ft=b%16;
        ln=0;
    };
    set(int a,int b,int c){ //輸入 a(0-16)背景顏色，b(0-16)文字顏色，c(0-8)框架格式
        bg=a%16;
        ln=c%8;
        ft=b%16;
    };
    set(){ //呼叫顏色
        HANDLE h=GetStdHandle(STD_OUTPUT_HANDLE);
        SetConsoleTextAttribute(h,ln*1024+bg*16+ft);
    };
};
void ocolor(void){ //呼叫預設艷色
    HANDLE h=GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(h,7);
}
#endif // COLORFUL_H_INCLUDED
